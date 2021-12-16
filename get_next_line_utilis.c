/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utilis.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:41:31 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/16 20:33:20 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *c)
{
    int i;

	i = 0;
	while(c[i])
		i++;
	return(i);
}

int	ft_backslash(char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i++])
			if (s[i] == '\n')
				return (1);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	o;
	char	*p;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0'; 
	}
	if (!s2)
		return (NULL);
	i = 0;
	o = 0;
	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[o] != '\0')
	{
		p[i + o] = s2[o];
		o++;
	}
	p[i + o] = '\0';
	free (s1);
	return (p);
}