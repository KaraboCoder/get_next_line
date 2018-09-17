/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:18:27 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 12:18:29 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t ln;

	if (*little == '\0')
		return ((char *)big);
	ln = ft_strlen(little);
	while (*big != '\0' && len-- >= ln)
	{
		if (*big == *little && ft_memcmp(big, little, ln) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
