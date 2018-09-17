/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:59:21 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 11:59:24 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str_s;

	str_s = (unsigned char *)s;
	while (n > 0)
	{
		if (*str_s == (unsigned char)c)
			return (str_s);
		str_s++;
		n--;
	}
	return (NULL);
}
