/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_helper3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:07:04 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/04 16:45:36 by hachahbo         ###   ########.fr       */
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

int	check_m(t_stack *lst)
{
	int	i;

	if (lst-> mark == 0 || lst-> mark == 2)
	{
		if (lst -> b_move_a < lst -> b_move_b)
			i = lst -> b_move_b;
		else
			i = lst -> b_move_a;
	}
	if (lst -> mark == 1)
		i = lst -> b_move_a + lst -> b_move_b;
	return (i);
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
		if (check_m(head) < check_m(all))
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
