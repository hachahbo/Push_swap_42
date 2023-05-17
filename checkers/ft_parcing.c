/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parcing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:55:30 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/15 23:05:39 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_check_double(int *tab, t_na *st)
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

void	ft_parcing(char **tab, t_na *st)
{
	int		i;
	int		*arr;

	ft_parcing_1(tab);
	ft_parcing_2(tab);
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
	free(arr);
}
