/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:20:42 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 16:14:08 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(int *size, t_ac *st)
{
	int	i;
	int	max;

	i = 0;
	max = size[0];
	while (i < st->size)
	{
		if (size[i] > max)
		{
			max = size[i];
		}
		i++;
	}
	return (max);
}

int	*fill__size_and_pos_array(t_list *val, int *arr, int *size, t_ac *st)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (j < st->size)
	{
		i = 0;
		while (i < j)
		{
			if (arr[i] < arr[j])
			{
				if (size[i] + 1 >= size[j])
				{
					size[j] = size[i] + 1;
					val->pos[j] = i;
				}	
			}
			i++;
		}
		j++;
	}
	return (size);
}

int	find_index(int *size, int max, t_ac *st)
{
	int	i;

	i = 0;
	while (i < st->size)
	{
		if (max == size[i])
			return (i);
		i++;
	}
	return (0);
}

int	*fill_the_longest_array(t_list *val, int *arr, int i, int *t)
{
	int	j;
	int	k;
	int	*longest;
	int	x;

	j = 0;
	k = 0;
	longest = (int *)malloc(sizeof(int) * t[0]);
	x = t[0] - 1;
	longest[x] = arr[i];
	j = val->pos[i];
	while (val->pos[j] != t[1])
	{
		x--;
		longest[x] = arr[j];
		k = val->pos[j];
		j = k;
	}
	x--;
	longest[x] = arr[j];
	return (longest);
}

int	*the_array(int *arr, t_list *val, t_ac *st)
{
	int	i;
	int	*size;
	int	max;
	int	*longest;
	int	t[2];

	size = malloc(sizeof(int) *(st->size));
	size = fill_the_size(size, st);
	fill_the_position_array(val, st);
	size = fill__size_and_pos_array(val, arr, size, st);
	max = find_max(size, st);
	i = find_index(size, max, st);
	t[0] = max;
	t[1] = st->size;
	longest = fill_the_longest_array(val, arr, i, t);
	val->max_longest = max;
	return (longest);
}
