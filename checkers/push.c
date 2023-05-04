/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:43:43 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/04 15:45:45 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pa(t_stack **lst_a, t_stack **head_b)
{
	t_stack	*temp;

	temp = NULL;
	if (!*head_b)
		return ;
	if (!*head_b)
		return ;
	temp = (*head_b);
	*head_b = (*head_b)->next;
	ft_lstadd_front(lst_a, temp);
}

void	ft_pb(t_stack **lst_b, t_stack **head_a)
{
	t_stack	*temp;

	temp = NULL;
	if (!*head_a || !(*head_a)->next)
		return ;
	if (!*head_a)
		return ;
	temp = (*head_a);
	*head_a = (*head_a)->next;
	ft_lstadd_front(lst_b, temp);
}
