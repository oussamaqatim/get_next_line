/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utilis.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 01:41:31 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/17 22:07:54 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
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
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	if (*s == '\0')
		len = 0;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (len != 0 && start < ft_strlen(s))
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
