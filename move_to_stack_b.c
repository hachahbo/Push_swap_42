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

// t_stack	*ft_tmp(t_stack *help)
// {
// 	t_stack *tmp;
	
// 	tmp = help->next;
// 	return(tmp);
// }
// t_stack *move_to_stack_b(t_stack *head_a)
// {
// 	t_stack *head_b = NULL;
// 	t_stack *help_a = head_a;
// 	t_stack *tmp = NULL;
// 	//t_stack *tmpb = NULL;
// 	int x = 0;
// 	int max = ft_lstsize(head_a);
// 	int j = max / 2;

// 	//printf("%d\n", help_a->index);
// 	while(help_a)
// 	{
// 		tmp = help_a->next;
// 		help_a->next = NULL;
// 		if(help_a->index <= x)
// 		{
// 			printf("hello \n");
// 			ft_pb(&head_b, &help_a);
// 			x++;
// 		}
// 		else if(help_a->index <= x + j)
// 		{
// 			ft_pb(&head_b, &help_a);
// 			ft_rb(&head_b);
// 			x++;
// 		}
// 		else
// 			ft_ra(&head_a);
// 		//help_a = tmp;
// 		//max--;
// 		help_a = tmp;
// 	}
// 	//ft_rb(&head_b);
// 	return(head_b);
// }

// void ft_reverse_rotate_the_largest(t_stack *head)
// {
// 	t_stack *min =  head;
// 	 t_stack *r_ptr =NULL;
// 	//t_stack *ptr = head;
// 	t_stack *tmp = NULL; 


// 	while(min->index)
// 		min = min->next;
// 	printf("%d\n", min->content);
// 	r_ptr = min->next;
// 	//printf("%d\n", r_ptr->content);
// 	min = head;
// 	tmp = r_ptr->next; 
// 	r_ptr->next = NULL;
// 	while(min)
// 	{
// 		printf("%d\n", min->content);
// 		min= min->next;
// 	}
// 	ft_rrb(&head);
// 	ft_lstadd_back(&head, tmp);
// }

 void move_to_stack_b(t_stack **head_b ,t_stack *head_a, t_stack *longest_help, int ac)
 {
	int i; 

	i = 0;
	while(i < ac - 1)
	{
		if(head_a->content == longest_help->content)
			ft_rr(&head_a, &longest_help);
		else
			ft_pb(head_b, &head_a);
		i++;
	}
 }