/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:21:40 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 17:45:41 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra_a(t_stack **head)
{
	t_stack	*last;
	t_stack	*b_last;

	if (!(*head))
		return ;
	b_last = NULL;
	last = *head;
	while (last->next != NULL)
	{
		b_last = last;
		last = last->next;
	}
	last->next = *head;
	b_last->next = NULL;
	*head = last;
}

void	ft_rrb_b(t_stack **head)
{
	t_stack	*last;
	t_stack	*b_last;

	if (!(*head))
		return ;
	b_last = NULL;
	if (ft_lstsize(*head) > 1)
	{
		last = *head;
		while (last->next != NULL)
		{
			b_last = last;
			last = last->next;
		}
		last->next = *head;
		b_last->next = NULL;
		*head = last;
	}
}

void	ft_rb_b(t_stack **lst)
{
	t_stack	*last;

	if (!*lst || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void	ft_ra_a(t_stack **lst)
{
	t_stack	*last;

	if (!*lst || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void	ft_h_sb(t_stack **lst)
{
	t_stack	*first;
	t_stack	*second;

	if (!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
}
