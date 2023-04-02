/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_with_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:13:26 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/23 02:47:58 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_sort_list(t_stack *head)
{
	int i_sort;
	
	i_sort = -1;
	while(head != NULL)
	{
		head->i_sort = i_sort;
		head = head->next;
	}
}

void	sort_list(t_stack **head)
{
	t_stack *second = NULL;
	t_stack *min; 
	int i;
	
	i = 0;
	while(i < ft_lstsize(*head))
	{
		min = *head;
		second = min->next;
		while(second)
		{
			if (min->i_sort != -1)
				min = min->next;
			if(min->content > second->content  && second->i_sort == -1)
			{
				min= second; 
			}
			second = second->next;
		}
		min->i_sort = i;
		i++;
	}
}
