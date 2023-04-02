/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:20:42 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/19 17:33:17 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *fill_the_size(int *size, int ac)
{
	int i;
	
	i = 0;
	while(i < ac - 1)
	{
		size[i] = 1;
		i++;
	}
	return(size);
}
void fill_the_position_array(t_list *val , int ac)
{
	int i;
	
	i = 0;
	while(i < ac - 1)
	{
		val->pos[i] = ac - 1;
		i++;
	}
}
int find_max(int *size, int ac)
{
	int i;
	int max;
	
	i = 0;
	max = size[0];
	while(i < ac - 1)
	{
		if(size[i] > max)
		{
			max = size[i];
		}
		i++;
	}
	return(max);
}

int *fill__size_and_pos_array(t_list *val,int *arr, int *size, int ac)
{
	int i;
	int j;
	
	i = 0;
	j = i + 1;
	while(j < ac - 1)
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
int find_index(int *size, int max, int ac)
{
	int i;
	
	i = 0;
	while(i < ac - 1)
	{
		if(max == size[i])
			return(i);
		i++;
	}
	return(0);
}
int *fill_the_longest_array(t_list *val, int *arr, int i, int ac, int max)
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
	while(val->pos[j] != ac - 1)
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
int *the_array(int *arr , int ac, t_list *val)
{
	int i;
	int *size = malloc(sizeof(int) *(ac - 1));
	int max;
	int *longest;
	
	size = fill_the_size(size, ac);
	fill_the_position_array(val, ac);
	size = fill__size_and_pos_array(val, arr, size, ac);
	max = find_max(size, ac);
	i = find_index(size, max, ac);
	longest = fill_the_longest_array(val, arr, i, ac, max);
	val->max_longest = max;
	return(longest);
}
