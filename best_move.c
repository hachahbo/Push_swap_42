/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:35:58 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 22:28:55 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_place(t_stack *stack_a, int m, int size)
{
	int	x;

	x = 0;
	while (stack_a)
	{
		if (stack_a -> content == m)
			break ;
		x++;
		stack_a = stack_a -> next;
	}
	if (x >= size / 2)
		return (0);
	return (1);
}

int	find_the_big_number_st_a(t_stack *help_a, t_stack *first)
{
	int		m;
	int		size;
	t_stack	*reg;
	t_stack	*last;
	int		content;

	m = 0;
	size = ft_lstsize(help_a);
	reg = help_a;
	last = link_lst(&help_a);
	while (size)
	{
		content = help_a->next->content;
		if ((help_a)->content < first->content && content > first->content)
		{
			m = (help_a)->next->content;
			break ;
		}
		help_a = help_a -> next;
		size--;
	}
	return (d_link(&help_a, last, reg), m);
}

int	ft_check_the_top(t_stack *stack_a, int m)
{
	if (stack_a->content == m)
		return (1);
	return (0);
}

void	put_in_sa(t_stack **stack_a, t_stack **stack_b, t_stack *first)
{
	t_stack	*help_a;
	t_stack	*help_b;
	t_ac	fel;

	help_a = *stack_a;
	help_b = *stack_b;
	fel.min = find_small(*stack_a);
	if (first -> content < fel.min || first -> content > find_big(*stack_a))
	{
		check_mn_mx(stack_a, stack_b, first, &fel);
		(*stack_b)->mark = 3;
	}
	fel.m = find_the_big_number_st_a(help_a, first);
	if (first -> mark == 1)
		ft_mark_one(stack_a, stack_b, first, &fel);
	if (first -> mark == 2 || first -> mark == 0)
	{
		if (first -> mark == 2)
			ft_mark_two(stack_a, stack_b, first, &fel);
		if (first -> mark == 0)
			ft_mark_zero(stack_a, stack_b, first, &fel);
	}
	ft_pa(stack_a, stack_b);
}

void	move_to_stack_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*first1;
	t_stack	*first2;
	int		a;

	a = 0;
	count_sta(*stack_a, stack_b);
	best_move_b(stack_b);
	while ((*stack_b))
	{
		first1 = (*stack_a);
		(*stack_a) = first1;
		first2 = (*stack_b);
		(*stack_b) = first2;
		first = find_best_mov(*stack_b);
		put_in_sa(stack_a, stack_b, first);
		if (ft_lstsize(*stack_b) == 0)
			break ;
		count_sta(*stack_a, stack_b);
		best_move_b(stack_b);
		a++;
	}
}
