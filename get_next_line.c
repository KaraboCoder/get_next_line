/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:37:05 by kngwato           #+#    #+#             */
/*   Updated: 2017/09/20 17:02:45 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list			*get_file(t_list **file, int fd)
{
	t_list				*tmp;

	tmp = *file;
	while (tmp)
	{
		if ((int)tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", fd);
	ft_lstadd(file, tmp);
	tmp = *file;
	return (tmp);
}

int						get_next_line(const int fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	static t_list		*file;
	int					i;
	int					ret;
	t_list				*cfile;

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	cfile = get_file(&file, fd);
	ISNULL((*line = ft_strnew(1)));
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		ISNULL((cfile->content = ft_strjoin(cfile->content, buf)));
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !ft_strlen(cfile->content))
		return (0);
	i = ft_copyuntilchr(line, cfile->content, '\n');
	(i < (int)ft_strlen(cfile->content))
		? cfile->content += (i + 1)
		: ft_strclr(cfile->content);
	return (1);
}
