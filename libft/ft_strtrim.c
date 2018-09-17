/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:21:54 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 12:21:56 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_trimleft(const char *s)
{
	size_t i;

	if (s == NULL)
		return (0);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && (s[i] != '\0'))
		i++;
	return (i);
}

static	size_t		ft_trimright(const char *s, size_t start)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && (i > start))
		i--;
	i++;
	return (i);
}

char				*ft_strtrim(char const *s)
{
	char		*str;
	size_t		start;
	size_t		end;

	if (s == NULL)
		return (NULL);
	start = ft_trimleft(s);
	end = ft_trimright(s, start);
	if (!s)
		return (NULL);
	str = ft_strsub(s, (unsigned int)start, (end - start));
	if (str == NULL)
		return (NULL);
	return (str);
}
