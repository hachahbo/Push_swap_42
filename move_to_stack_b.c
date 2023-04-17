/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:49:50 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/14 08:27:40 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void flag_zero(t_stack *head_a)
{
	while(head_a)
	{
		head_a->flag = 0;
		head_a = head_a ->next;
	}
}
 void move_to_stack_b(t_stack **head_b ,t_stack **head_a, t_stack *longest_help, int ac)
{
	int i;
	t_stack *help;
	t_stack *stack_a = (*head_a);
	help = longest_help;

	i = 0;
	flag_zero(stack_a);
	stack_a = (*head_a);
	while(stack_a)
	{
		help = longest_help;
		while(help)
		{
			if(help->content == stack_a->content)
			{
				stack_a ->flag = 1;
			}
			help = help->next; 
		}
		stack_a = stack_a->next;
	}
	i = 0;
	while(i < ac - 1)
	{
		if((*head_a)->flag == 1)
			ft_ra(head_a);
		else if((*head_a)->flag == 0)
			ft_pb(head_b, head_a);
		i++;
	}
}