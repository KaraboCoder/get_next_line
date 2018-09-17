/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:53:35 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/27 11:53:42 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int total;

	i = 0;
	total = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\f') ||
			(str[i] == '\r' || str[i] == '\n' || str[i] == '\v'))
		i++;
	if (str[i] == '-')
		sign = -1;
	else
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		total = (total * 10) + (str[i] - 48);
		i++;
	}
	return (total * sign);
}
