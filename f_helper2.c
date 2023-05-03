/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_helper2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:04:04 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 23:49:51 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_big(t_stack *node)
{
	int	a;

	a = node -> content;
	while (node)
	{
		if (node -> content > a)
			a = node -> content;
		node = node -> next;
	}
	return (a);
}

int	find_small(t_stack *node)
{
	int	a;

	a = node -> content;
	while (node)
	{
		if (node -> content < a)
			a = node -> content;
		node = node -> next;
	}
	return (a);
}

int	ret(t_stack *stack_a, int min, t_stack *last, t_stack *reg)
{
	int	a;

	d_link(&stack_a, last, reg);
	a = 0;
	while (stack_a)
	{
		if (stack_a -> content == min)
			break ;
		a++;
		stack_a = stack_a -> next;
	}		
	return (a);
}

void	count_sta_utils(t_stack *a, t_stack *e, int min, int max)
{
	t_stack	*reg;
	t_stack	*last;
	t_ac	p;

	p.x = 0;
	p.j = 0;
	p.size = ft_lstsize(a);
	reg = a;
	last = link_lst(&a);
	while (1)
	{
		if (e -> content < min || e -> content > max)
		{
			e -> b_move_a = ret(a, min, last, reg);
			p.j = 1;
			break ;
		}
		if (a->content < e->content && a->next->content > e-> content && ++p.x)
			break ;
		p.x++;
		a = a -> next;
	}
	ft_check_pos(e, p.size, p.x, p.j);
	if (p.j == 0)
		d_link(&a, last, reg);
}

void	best_move_b(t_stack **stack_b)
{
	t_stack	*temp_b;
	int		size;
	int		x;

	if (!stack_b)
		return ;
	size = ft_lstsize(*stack_b);
	temp_b = (*stack_b);
	x = 0;
	while ((*stack_b))
	{
		if (x <= (size / 2))
			(*stack_b)->b_move_b = x;
		else
		{
			(*stack_b)->b_move_b = (size - x);
			(*stack_b)->mark += 1;
		}
		(*stack_b) = (*stack_b)->next;
		x++;
	}
	(*stack_b) = temp_b;
}
