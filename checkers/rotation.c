/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:16:54 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/03 00:49:05 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rb(t_stack **lst)
{
	t_stack	*last;

	if (!*lst || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void	ft_ra(t_stack **lst)
{
	t_stack	*last;

	if (!*lst || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void	ft_rr(t_stack **head, t_stack **lst)
{
	if (!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_ra_a(head);
	ft_rb_b(lst);
}
