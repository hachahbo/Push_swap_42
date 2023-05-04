/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:11:08 by hachahbo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/04 01:55:16 by hachahbo         ###   ########.fr       */
=======
/*   Updated: 2023/05/01 17:19:24 by hachahbo         ###   ########.fr       */
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_the_size(int *size, t_ac *st)
{
	int	i;

	i = 0;
	while (i < st->size)
	{
		size[i] = 1;
		i++;
	}
	return (size);
}

void	fill_the_position_array(t_list *val, t_ac *st)
{
	int	i;

	i = 0;
	while (i < st->size)
	{
		val->pos[i] = st->size;
		i++;
	}
}

int	free_2d(char **l_str)
{
	int	i;

	i = 0;
	while (l_str[i])
	{
		free(l_str[i]);
		i++;
	}
	free(l_str);
	return (0);
}

void	error_help(int a)
{
	(void)a;
	ft_printf("Error\n");
	exit(-1);
}
