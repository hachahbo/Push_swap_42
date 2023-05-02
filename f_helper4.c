/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_helper4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:22:44 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 22:34:51 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_mn_mx(t_stack **a, t_stack **b, t_stack *first, t_ac *fel)
{
	t_stack	*help_b;

	help_b = *b;
	fel->a = find_place(*a, fel->min, ft_lstsize(*a));
	while (1)
	{
		if ((*a)->content == fel->min)
			break ;
		if (fel->a == 0)
			ft_rra(a);
		if (fel->a == 1)
			ft_ra(a);
	}
	fel->best_move = first->content;
	fel->a = find_place(help_b, fel->best_move, ft_lstsize(help_b));
	while (1)
	{
		if ((*b)->content == fel->best_move)
			break ;
		if (fel->a == 0)
			ft_rrb(b);
		else if (fel->a == 1)
			ft_rb(b);
	}
}

void	ft_mark_one(t_stack **a, t_stack **b, t_stack *first, t_ac *fel)
{
	t_stack	*help_b;

	help_b = *b;
	fel->a = find_place(*a, fel->m, ft_lstsize(*a));
	while (1)
	{
		if ((*a)->content == fel->m)
			break ;
		if (fel->a == 0)
			ft_rra(a);
		if (fel->a == 1)
			ft_ra(a);
	}
	fel->best_move = first->content;
	fel->a = find_place(help_b, fel->best_move, ft_lstsize(help_b));
	while (1)
	{
		if ((*b)->content == fel->best_move)
			break ;
		if (fel->a == 0)
			ft_rrb(b);
		else if (fel->a == 1)
			ft_rb(b);
	}
}

void	ft_mark_two(t_stack **a, t_stack **b, t_stack *first, t_ac *fel)
{
	t_stack	*help_b;

	help_b = *b;
	fel->small = check_the_smallest_best_move(first);
	fel->big = check_the_biggest_best_move(first);
	fel->range = fel->big - fel->small;
	while (fel->small)
	{
		ft_rrr(a, b);
		fel->small--;
	}
	fel->a = ft_check_the_top(*a, fel->m);
	while (fel->range)
	{
		if (fel->a == 0)
			ft_rra(a);
		if (fel->a == 1)
			ft_rrb(b);
		fel->range--;
	}
}

void	ft_mark_zero(t_stack **a, t_stack **b, t_stack *first, t_ac *fel)
{
	t_stack	*help_b;

	help_b = *b;
	fel->small = check_the_smallest_best_move(first);
	fel->big = check_the_biggest_best_move(first);
	fel->range = fel->big - fel->small;
	while (fel->small)
	{
		ft_rr(a, b);
			fel->small--;
	}
	fel->a = ft_check_the_top(*a, fel->m);
	while (fel->range)
	{
		if (fel->a == 0)
			ft_ra(a);
		if (fel->a == 1)
			ft_rb(b);
		fel->range--;
	}
}
