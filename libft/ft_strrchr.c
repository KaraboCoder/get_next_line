/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:19:36 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 12:19:40 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *s2;

	s2 = (char *)s + ft_strlen(s);
	while (*s2 != (unsigned char)c)
	{
		if (s2 == s)
		{
			return (NULL);
		}
		s2--;
	}
	return (s2);
}
