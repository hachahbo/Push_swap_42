/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:13:31 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 17:43:27 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **lst)
{
	t_stack	*first;
	t_stack	*second;

	ft_printf("sa\n");
	first = NULL;
	second = NULL;
	if (!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
}

void	ft_sb(t_stack **lst)
{
	t_stack	*first;
	t_stack	*second;

	ft_printf("sb\n");
	if (!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
}

void	ft_h_sa(t_stack **lst)
{
	t_stack	*first;
	t_stack	*second;

	if (!*lst || (*lst)->next == NULL)
		return ;
	first = NULL;
	second = NULL;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
}

void	ft_ss(t_stack **head, t_stack **lst)
{
	ft_printf("ss\n");
	if (!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_h_sa(head);
	ft_h_sb(lst);
}
