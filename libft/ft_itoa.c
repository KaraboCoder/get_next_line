/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:57:08 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 11:57:11 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_length(int n, size_t *len, int *weight)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*weight = 1;
	while (n / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}

char			*ft_itoa(int n)
{
	size_t		len;
	int			wt;
	size_t		cur;
	char		*str;

	ft_length(n, &len, &wt);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
	{
		str[cur] = '-';
		cur++;
	}
	if (n > 0)
		n = -n;
	while (wt >= 1)
	{
		str[cur++] = -(n / wt % 10) + '0';
		wt = wt / 10;
	}
	str[cur] = '\0';
	return (str);
}
