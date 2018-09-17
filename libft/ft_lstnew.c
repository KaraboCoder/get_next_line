/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:09:14 by kngwato           #+#    #+#             */
/*   Updated: 2017/09/20 16:09:17 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t fd)
{
	t_list		*list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (!content)
	{
		list->content = NULL;
		list->fd = 0;
	}
	else
	{
		if (!(list->content = malloc(fd)))
			return (NULL);
		ft_memcpy(list->content, content, fd);
		list->fd = fd;
	}
	list->next = NULL;
	return (list);
}
