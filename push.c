/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:43:43 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/15 14:16:43 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pa(t_stack **lst_a, t_stack **head_b)
{
	t_stack *temp = NULL;

	printf("pa\n");
	if(!*head_b)
		return ;
	temp = (*head_b);
	*head_b = (*head_b)->next;
	ft_lstadd_front(lst_a, temp);
}

void ft_pb(t_stack **lst_b, t_stack **head_a)
{
	t_stack *temp = NULL;

	// if(!*lst_b || !(*lst_b)->next || !*head_a || !(*head_a)->next)
	// 	return ;
	printf("pb\n");
	if(!*head_a)
		return ;
	temp = (*head_a);
	*head_a = (*head_a)->next;
	ft_lstadd_front(lst_b, temp);
}
// int main()
// {
// 	t_stack *lst =  NULL;
// 	t_stack *head = NULL;
// 	char *cont1 = "hamza";
// 	char *cont2 = "chahboune";
// 	char *cont3 = "from first to the last";
// 	t_stack *node1 = ft_lst_new(cont1);
// 	t_stack *node2 = ft_lst_new(cont2);
// 	t_stack *node3 = ft_lst_new(cont3);
// 	char *cont4 = "123";
// 	char *cont5= "456";
// 	char *cont6 = "1337";
// 	t_stack *node4 = ft_lst_new(cont4);
// 	t_stack *node5 = ft_lst_new(cont5);
// 	t_stack *node6 = ft_lst_new(cont6);
// 	ft_add_front(&lst, node1);
// 	ft_add_front(&lst, node2);
// 	ft_add_front(&lst, node3);
// 	ft_add_front(&head, node4);
// 	ft_add_front(&head, node5);
// 	ft_add_front(&head, node6);
// 	printf("-------before rotation \n");
// 	printlist(lst);
// 	ft_pa(&lst, &head);
// 	printf("------after rotation \n");
// 	printlist(lst);

// 	printf("\n\n");
// 	printlist(head);
// 	return(0);
// }