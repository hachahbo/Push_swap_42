/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:16:54 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/09 11:05:33 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_rb(t_stack **lst)
{
	t_stack *last; 

	if(!*lst || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void ft_ra(t_stack **lst)
{
	t_stack *last; 

	if(!*lst || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void ft_rr(t_stack **head, t_stack **lst)
{
	if(!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_ra(head);
	ft_rb(lst);
}
