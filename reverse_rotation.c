/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:18:45 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 17:29:26 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **head)
{
	t_stack	*last;
	t_stack	*b_last;

	b_last = NULL;
	if (!(*head))
		return ;
	last = *head;
	while (last->next != NULL)
	{
		b_last = last;
		last = last->next;
	}
	last->next = *head;
	b_last->next = NULL;
	*head = last;
	ft_printf("rra\n");
}

void	ft_rrb(t_stack **head)
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
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack **head, t_stack **lst)
{
	ft_printf("rrr\n");
	if (!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_rra_a(head);
	ft_rrb_b(lst);
}
