/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:35:32 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/16 20:30:51 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char*	fonc(fd, str)
{
	char *ptr;
	int d;

	ptr = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (ptr == NULL)
		return (NULL);
	d = 1;
	while (ft_backslash(ptr) == 0 && d != 0)
	{
		d = read(fd, ptr, BUFFER_SZE);
		while(d == 0)
		{
			free (ptr);
			return (NULL);
		}
		ptr[d] = '\0';
		str = ft_strjoin(str, ptr);
		 
	}
	free (ptr);
	return (str);
}	
char *get_next_line(int fd)
{
	char static	*str;

	
}