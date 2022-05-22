/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelroy <eelroy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:53:06 by eelroy            #+#    #+#             */
/*   Updated: 2021/10/27 08:57:36 by eelroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fg);

size_t	ft_strlen(char *s);
int		ft_strchr(char *s, int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char *s1, char *s2);

#endif
