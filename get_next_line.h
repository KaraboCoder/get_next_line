/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:35:47 by kngwato           #+#    #+#             */
/*   Updated: 2017/09/20 16:32:32 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include "libft/libft.h"
# include <stdlib.h>
# define BUFF_SIZE 32

# define ISNULL(x) if (!x) return (-1);

int get_next_line(int fd, char **line);

#endif
