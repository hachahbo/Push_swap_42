/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_with_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:13:26 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/12 14:03:24 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_sort_list(t_stack *head)
{
	int index;
	
	index = -1;
	while(head != NULL)
	{
		head->index = index;
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
			if (min->index != -1)
				min = min->next;
			if(min->content > second->content  && second->index == -1)
			{
				min= second; 
			}
			second = second->next;
		}
		min->index = i;
		i++;
	}
}
