/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelroy <eelroy@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:52:41 by eelroy            #+#    #+#             */
/*   Updated: 2021/10/27 08:42:24 by eelroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	i;
	void			*x;

	i = 0;
	x = malloc(count * size);
	if (!x)
		return (0);
	while (i < size * count)
	{
		((char *) x)[i] = 0;
		i++;
	}
	return (x);
}

size_t	ft_strlen(char *s)
{
	size_t	res;

	if (!s)
		return (0);
	res = 0;
	while (s[res])
		res++;
	return (res);
}

int	ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return (1);
		s++;
	}
	if (!c)
		return (1);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = (char *)ft_calloc(sizeof(char), len);
	i = 0;
	while (s && s1[i++])
		s[i - 1] = s1[i - 1];
	j = 0;
	while (s && s2[j++])
		s[j + i - 2] = s2[j - 1];
	free(s1);
	return (s);
}
