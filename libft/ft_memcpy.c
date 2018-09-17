/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:59:48 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 11:59:50 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str_src;
	unsigned char	*str_dst;

	str_src = (unsigned char *)src;
	str_dst = (unsigned char *)dst;
	while (n > 0)
	{
		*str_dst = *str_src;
		str_dst++;
		str_src++;
		n--;
	}
	return (dst);
}
