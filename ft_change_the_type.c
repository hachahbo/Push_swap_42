/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_the_type.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:29:23 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/12 15:21:11 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *join_to_str(char **av, int ac)
{
	char *temp;
	char *temp2;
	char *result = ft_strjoin(av[1], " ");
	int i;
	i = 2;
	while(i < ac)
	{
		temp = ft_strjoin(result, av[i]);
		temp2 = ft_strjoin(temp, " ");
		free (result);
		free (temp);
		result = temp2;
		i++;
	}
	return(result);
}

int *tableau(char **av, int ac)
{
	
	char **ult_str;
	int *t;
	int i;
	char *str;

	str = join_to_str(av, ac);
	t = (int *)malloc(ac * sizeof(int));
	ult_str = ft_split(str, ' ');
	i = 0;
	while(ult_str[i])
	{
		t[i] = ft_atoi(ult_str[i]);
		i++;
	}
	return(t);
}