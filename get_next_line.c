/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:35:32 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/17 22:00:30 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char*	func1(int fd, char *str)
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

char	*func2(char *str)
{
	char	*ptr;
	int 	i;
	
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		{
			i++;
		}
	if (str[i] == '\n')
		i++;
	ptr = ft_substr(str, 0, i);
	return (ptr);
}

char *func3(char *str)
{
	char	*ptr;	
	int		s;
	int 	c;

	s = 0;
	while (str[s] != '\n' && str[s] != '\0')
		s++;
	if (str[s] == '\n')
		s++;
	c = ft_strlen(str) - s;
	ptr = ft_substr(str, s, c);
	free (str);
	return (ptr);
}

char	*get_next_line(int fd)
{
	char static	*str;
	char		*cc;
	
	if (BUFFER_SIZE <= 0)
		return (NULL);
	str = func1(fd, str);
	cc = func2(str);
	str = func3(str);
	return (cc);
}
int main()
{
	int fd = open("kk" ,O_RDONLY);
	
	printf("%s",get_next_line(fd));
	
}