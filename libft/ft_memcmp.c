/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:59:34 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 11:59:37 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_s1;
	unsigned char	*str_s2;

	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*str_s1 - *str_s2)
			return (*str_s1 - *str_s2);
		str_s1++;
		str_s2++;
		n--;
	}
	return (0);
}
