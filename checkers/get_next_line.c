/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:48:52 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/02 20:31:00 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_new_str(char *lstr)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (lstr[i] && lstr[i] != '\n')
		i++;
	if (!lstr[i])
		return (free(lstr), NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(lstr) - i + 1));
	if (!str)
		return (free(lstr), NULL);
	i++;
	j = 0;
	while (lstr[i])
		str[j++] = lstr[i++];
	str[j] = '\0';
	free(lstr);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = ft_read_str(fd, str);
	if (!str)
		return (NULL);
	line = ft_get_line(str);
	str = ft_new_str(str);
	return (line);
}

// int main()
// {
// 	int fd1;
	
// 	fd1 = open("text.txt", O_RDWR);
// 	char *c;
	
// 	while(1)
// 	{
// 		c = get_next_line(fd1);
// 		if(c == NULL)
// 			break;
// 		printf("%s", c);
// 	}
// 	return(0);
// }