/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 22:35:32 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/15 02:22:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_readfile(char *str, int fd)
{
	char	*bobiz;
	int		r;

	bobiz = malloc(BUFFER_SIZE + 1);
	r = 1;
	while (ft_backslash(str) == 0 && r != 0)
	{
		r = read(fd, bobiz, BUFFER_SIZE);
		if (r == -1)
			return (free(bobiz));
		if (r == 0)
			break ;
		bobiz[r] = '\0';
		str = ft_strjoin(str, bobiz);
	}
	free(bobiz);
	return (str);
}
char	*get_next_line(int fd)
{
	char static	*str;
	str = func(str, fd);
	
}