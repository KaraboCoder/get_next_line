/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:00:31 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 12:00:34 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)dest;
	while (len > 0)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (dest);
}
