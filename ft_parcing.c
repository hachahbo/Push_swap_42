/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:55:30 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/09 10:27:33 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			return (1);
		i++;
	}
	return (0);
}
void ft_error(char **tab)
{
	printf("Errero\n");
	free_2d(tab);
	exit(0);
}
int	ft_strcmp(char *s1, char *s2)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (c1[i] == c2[i] && c1[i] != 0 && c2[i] != 0)
		i++;
	return (c1[i] - c2[i]);
}

void  ft_parcing(char  **tab)
{
	int i;
	int j;
	int n;
	
	i =  0;
	while(tab[i])
	{
		j = i;
		while(tab[j++])
		{
			if((tab[j] && ft_atoi(tab[i]) == ft_atoi(tab[j])) || tab[i] == '\0')
					ft_error(tab);
			if(ft_str_is_alpha(tab[i]))
					ft_error(tab);
			n = ft_atoi(tab[i]);
			if(n > INT_MAX || n < INT_MIN || n == -1)
					ft_error(tab);
			i++;
		}
	}
}