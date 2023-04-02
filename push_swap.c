/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:18:09 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/27 16:13:50 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

// void ft_sort_3(t_stack **head)
// {
// 	t_stack *tmp = NULL;
// 	t_stack *size;
// 	t_stack *second;
// 	t_stack *first;
// 	int max;
// 	int i = 1;
	
// 	size = head;
// 	max = ft_lstsize(size);
// 	tmp = ft_lstlast(tmp);
// 	if(head->index == max - 1)
// 	{	
// 		ft_ra(&head);
// 		//printf("%d", head->content);
// 	}
// 	else if(tmp->index == max - 1)
// 		ft_rra(&head);
	
// 	second = (*head)->next;
// 	if(head->index > tmp->index)
// 		ft_sa(&head);
// 		printf("---------------------\n");
// 	while(head)
// 	{
// 		printf("sort[%d] : %d index %d \n",i,  head->content, head->index);
// 		head = head->next;
// 	}
	
	
// }
int main(int ac, char **av)
{
	t_stack 	*new;
	t_stack		*node;
	t_stack		*new1;
	t_stack 	*head_a;
	t_stack 	*head_help;
	t_stack		*head_b =	NULL;
	t_list	kk;
	t_stack *longest;
	t_stack *longest_help;
	t_list val;
	t_stack *best_head_a;
	t_stack *best_head_b;
	int			*log;
	int			*tab;
	int			i;
	
	if(ac < 2)
	{
		printf("invalid input, add some arguments pls");
		return(0);
	}
	//ft_parcing;
	val.pos = (int *) malloc (sizeof(int ) * ac -1);
	tab = tableau(av, ac);
	i = 0;
	while(i < ac - 1)
	{
		new = ft_lstnew(tab[i]);
		ft_lstadd_back(&head_a, new);
		i++;
	}
	node = head_a;
	index_sort_list(node);
	node = head_a;
	sort_list(&node);
	log = the_array(tab, ac, &val);
	i = 0;
	longest =NULL;
	while(i < val.max_longest)
	{
		new1 = ft_lstnew(log[i]);
		ft_lstadd_back(&longest, new1);
		i++;
	}
	head_help = head_a;
	longest_help = longest;	 
	move_to_stack_b(&head_b, head_help, longest_help, ac);
	best_head_a = head_a;
	best_head_b = head_b;
	best_move(best_head_a, best_head_b, &kk);
	move_to_stack_a(&head_a, &head_b, &kk);
	while(head_b)
	{
		printf("stack b :%d\n", head_b->content);
		head_b = head_b->next;
	}
	while(head_a)
	{
		printf("|||||||satck a: %d \n", head_a->content);
		head_a = head_a->next;
	}
	

















	
	// fun(stb, int elem, int *mark)
	// {
	// 	while(1)
	// 	{
	// 		if(stb -> content == elem)
	// 			break;
	// 		a++;
	// 	}
	// 	if(a > 2)
	// 	{
	// 		*mark++;
	// 	}
	// }
	// while(i < ac - 1)
	// {
	// 	printf(" |||||||||| size :%d \n" ,size[i]);
	// 	i++;
	// }
	// 	i = 0;
	// while(i < ac - 1)
	// {
	// 	printf("pos :%d \n" ,val.pos[i]);
	// 	i++;
	// }
	
	// while(i < ac - 1)
	// {
	// 	node = ft_lstnew(tab[i]);
	// 	ft_lstadd_back(&head, node);
	// 	i++;
	// }
	// node = head;
	// index_sort_list(node);
	// node = head;
	// sort_list(&node);
	// data = head;
	// //printf("%d\n",ft_lstsize(head));
	// printf("----------------------");
	// while(node)
	// {
	// 	printf("data[%d] : %d index %d \n",i,  node->content, node->index);
	// 	node = node->next;

	// }
	
	// // ft_sort_3(data);
	// printf("----------------------");
	// head_b = move_to_stack_b(head);
	// help = head_b;
	// while(help)
	// {
	// 	printf("help[%d] : %d index %d \n",i,  help->content, help->index);
	// 	help = help->next;
	// }
	// printf("----------------------");
	// help = head_b;
	// ft_reverse_rotate_the_largest(help);
	
	// while(help)
	// {
	// 	printf("help[%d] : %d index %d \n",i,  help->content, help->index);
	// 	help = help->next;
	// }
	return(0);
}
