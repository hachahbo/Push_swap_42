/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:20:42 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/15 15:33:08 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *fill_the_size(int *size, int ac, t_ac *st)
{
	int i;
	
	i = 0;
	while(i < st->size)
	{
		size[i] = 1;
		i++;
	}
	return(size);
}
void fill_the_position_array(t_list *val , int ac, t_ac *st)
{
	int i;
	
	i = 0;
	while(i < st->size)
	{
		val->pos[i] = st->size;
		// printf("size : %d\n", val->pos[i]);
		i++;
	}
}
int find_max(int *size, int ac, t_ac *st)
{
	int i;
	int max;
	
	i = 0;
	max = size[0];
	while(i < st->size)
	{
		if(size[i] > max)
		{
			max = size[i];
		}
		i++;
	}
	return(max);
}

int *fill__size_and_pos_array(t_list *val,int *arr, int *size, int ac, t_ac *st)
{
	int i;
	int j;
	
	i = 0;
	j = i + 1;
	while(j < st->size)
	{
		i = 0;
		while(i < j)
		{
			if(arr[i] < arr[j])
			{
				if(size[i] + 1 >= size[j])
				{
					size[j] = size[i] + 1;
					val->pos[j] = i; 
				}	
			}
			i++;		
		}
		j++;
	}
	return(size);
}
int find_index(int *size, int max, int ac, t_ac *st)
{
	int i;
	
	i = 0;
	while(i < st->size)
	{
		if(max == size[i])
			return(i);
		i++;
	}
	return(0);
}
int *fill_the_longest_array(t_list *val, int *arr, int i, int ac, int max, t_ac *st)
{
	int j;
	int k;
	int *longest;
	int x;
	
	j = 0;
	k = 0;
	longest = (int *)malloc(sizeof(int) * max);
	x = max - 1;
	longest[x] = arr[i];
	j = val->pos[i];
	while(val->pos[j] != st->size)
	{
		x--;
		longest[x] = arr[j];
		k = val->pos[j];
		j = k;
	}
	x--;
	longest[x] = arr[j];
	return(longest);
}
int *the_array(int *arr , int ac, t_list *val, t_ac *st)
{
	int i;
	int *size = malloc(sizeof(int) *(ac - 1));
	int max;
	int *longest;
	
	size = fill_the_size(size, ac, st);
	fill_the_position_array(val, ac, st);
	size = fill__size_and_pos_array(val, arr, size, ac, st);
	max = find_max(size, ac, st);
	i = find_index(size, max, ac, st);
	longest = fill_the_longest_array(val, arr, i, ac, max, st);
	val->max_longest = max;
	// int a = 0;
	// while(a < max)
	// 	printf("%d\n", longest[a++]);
	return(longest);
}
