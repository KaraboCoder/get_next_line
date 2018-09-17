/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:18:13 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 12:18:15 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char		*str;
	size_t		counter;

	str = (char *)malloc(sizeof(*str) * size + 1);
	counter = 0;
	if (str == NULL)
		return (NULL);
	while (counter < size)
	{
		str[counter] = '\0';
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
