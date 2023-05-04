/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:45:56 by hachahbo          #+#    #+#             */
/*   Updated: 2022/11/03 16:57:39 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <libc.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*get_next_line_bonus(int fd);
char	*ft_read_str(int fd, char *str);
char	*ft_get_line(char *str);
char	*ft_new_str(char *str);
char	*ft_strjoin(char *str, char *buff);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(char *s);

#endif