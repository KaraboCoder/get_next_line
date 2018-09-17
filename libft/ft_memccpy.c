/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:59:09 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 11:59:12 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;
	size_t			i;
	unsigned char	to_stop;

	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	i = 0;
	to_stop = (unsigned char)c;
	while (i < n)
	{
		if ((*str_dest++ = *str_src++) == to_stop)
			return (str_dest);
		i++;
	}
	return (NULL);
}
