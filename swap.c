/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:13:31 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/10 11:24:19 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_stack **lst)
{
	t_stack *first = NULL;
	t_stack *second = NULL;
	
	if(!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
} 

void ft_sb(t_stack **lst)
{
	t_stack *first;
	t_stack *second;

	if(!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
}

void ft_ss(t_stack **head, t_stack **lst)
{
	if(!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_sa(head);
	ft_sb(lst);
}