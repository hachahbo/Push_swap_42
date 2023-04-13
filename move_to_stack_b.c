/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:49:50 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/14 08:27:40 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


 void move_to_stack_b(t_stack **head_b ,t_stack **head_a, t_stack *longest_help, int ac)
 {
	int i;

	i = 0;
	while(i < ac - 1)
	{
		if((*head_a)->content == longest_help->content)
		{
			ft_rr(head_a, &longest_help);
		}
		else
		{
			ft_pb(head_b, head_a);
		}
		i++;
	}
	// while(head_a)
	// {
	// 	printf("head : %d \n", head_a->content);
	// 	head_a =head_a->next;
	// }
	// puts("--------------");
	// while((*head_b))
	// {
	// 	printf("head_b : %d \n", (*head_b)->content);
	// 	(*head_b) =(*head_b)->next;
	// }

}