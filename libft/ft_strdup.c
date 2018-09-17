/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:10:39 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 12:10:41 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str != NULL)
	{
		return (ft_memmove(str, s1, (len + 1)));
	}
	return (NULL);
}
