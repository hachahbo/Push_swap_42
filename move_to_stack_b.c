/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:49:50 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 15:48:32 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	flag_zero(t_stack *head_a)
{
	while (head_a)
	{
		head_a->flag = 0;
		head_a = head_a ->next;
	}
}

void	ft_push_to_b(t_stack **a, t_ac *st, t_stack **b)
{
	int	i;

	i = 0;
	while (i < st->size)
	{
		if ((*a)->flag == 1)
			ft_ra(a);
		else if ((*a)->flag == 0)
			ft_pb(b, a);
		i++;
	}
}

void	mv_t_sb(t_stack **b, t_stack **a, t_stack *log, t_ac *st)
{
	int		i;
	t_stack	*help;
	t_stack	*stack_a;

	help = log;
	stack_a = (*a);
	i = 0;
	flag_zero(stack_a);
	stack_a = (*a);
	while (stack_a)
	{
		help = log;
		while (help)
		{
			if (help->content == stack_a->content)
				stack_a->flag = 1;
			help = help->next;
		}
		stack_a = stack_a->next;
	}
	ft_push_to_b(a, st, b);
}
