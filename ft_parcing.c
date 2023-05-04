/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:55:30 by hachahbo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/04 15:22:57 by hachahbo         ###   ########.fr       */
=======
/*   Updated: 2023/05/01 18:14:28 by hachahbo         ###   ########.fr       */
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char **tab)
{
	printf("Error\n");
	free_2d(tab);
	exit(-1);
}

int	ft_check_double(int *tab, t_ac *st)
{
	int	a;
	int	b;

	a = 0;
	while (a < st->size)
	{
		b = a + 1;
		while (b < st->size)
		{
			if (tab[a] == tab[b])
				return (1);
			b++;
		}
		a++;
	}
	return (0);
}

void	ft_parcing(char **tab, t_ac *st)
{
	int		i;
	int		*arr;

	ft_parcing_1(tab, st);
	ft_parcing_2(tab, st);
	ft_parcing_3(tab);
	arr = malloc(sizeof(int) * st->size);
	i = 0;
	while (tab[i])
	{
		arr[i] = ft_atoi(tab[i]);
		i++;
	}
	if (ft_check_double(arr, st))
		ft_error(tab);
<<<<<<< HEAD
	free(arr);
=======
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
}
