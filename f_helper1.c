/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_helper1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:01:16 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 23:50:02 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*link_lst(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	first = *head;
	last = *head;
	while (last-> next != NULL)
		last = last-> next;
	last -> next = first;
	return (last);
}

void	d_link(t_stack **stack, t_stack *last, t_stack *reg)
{
	while ((*stack)-> content != last-> content)
		(*stack) = (*stack)-> next;
	(*stack)-> next = NULL;
	(*stack) = reg;
}

void	ft_index(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst->index = i;
		lst = lst->next;
		i++;
	}
}

void	printlist(t_stack *list)
{
	while (list)
	{
		ft_printf("stack a |%d|\n", list->content);
		list = list->next;
	}
}

void	ft_check_pos(t_stack *elem, int size, int x, int j)
{
	if (elem -> b_move_a > (size / 2) && j == 1)
	{
		elem -> b_move_a = (size - elem -> b_move_a);
		elem -> mark += 1;
	}
	else if (x > (size / 2) && j == 0)
	{
		elem ->b_move_a = (size - x);
		elem -> mark += 1;
	}
	else if (x <= (size / 2) && j == 0)
		elem ->b_move_a = x;
}
