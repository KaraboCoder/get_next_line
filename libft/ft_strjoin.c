/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:14:07 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 12:14:08 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		str_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str_len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(sizeof(*dest) * (str_len + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, s1);
	ft_strcat(dest, s2);
	return (dest);
}
