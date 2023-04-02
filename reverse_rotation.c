/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:18:45 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/19 15:05:46 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rra(t_stack **head)
{
	t_stack *last;
	t_stack *b_last = NULL;

	last = *head;
	while(last->next != NULL)
	{
		b_last = last;
		last = last->next;
	}
	b_last->next = NULL; 
	last->next = *head;
	*head = last;
	free(last);
}
void ft_rrb(t_stack **head)
{
	t_stack *last;
	t_stack *b_last = NULL;

	last = *head;
	while(last->next != NULL)
	{
		b_last = last;
		last = last->next;
	}
	b_last->next = NULL; 
	last->next = *head;
	*head = last;
	free(last);
}

void ft_rrr(t_stack **head, t_stack **lst)
{
	if(!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_rra(head);
	ft_rrb(lst);
}