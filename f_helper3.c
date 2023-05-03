/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_helper3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:07:04 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 23:46:28 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	count_sta(t_stack *a, t_stack **b)
{
	t_stack	*help;

	help = (*b);
	while ((*b))
	{
		(*b)->mark = 0;
		count_sta_utils(a, (*b), find_small(a), find_big(a));
		(*b) = (*b)->next;
	}
	(*b) = help;
}

int	go_pro(t_stack *go)
{
	int	a;

	if (go-> mark == 0 || go-> mark == 2)
	{
		if (go -> b_move_a < go -> b_move_b)
			a = go -> b_move_b;
		else
			a = go -> b_move_a;
	}
	if (go -> mark == 1)
		a = go -> b_move_a + go -> b_move_b;
	return (a);
}

t_stack	*find_best_mov(t_stack *all)
{
	t_stack	*head;
	t_stack	*save;

	head = all-> next;
	save = NULL;
	if (all -> next == NULL)
		return (save = all);
	save = all;
	while (head)
	{
		if (go_pro(head) < go_pro(all))
		{
			save = head;
			all = head;
		}
		head = head -> next;
	}
	return (save);
}

int	check_the_smallest_best_move(t_stack *first)
{
	if (first->b_move_a > first->b_move_b)
		return (first->b_move_b);
	return (first->b_move_a);
}

int	check_the_biggest_best_move(t_stack *first)
{
	if (first->b_move_a < first->b_move_b)
		return (first->b_move_b);
	return (first->b_move_a);
}
