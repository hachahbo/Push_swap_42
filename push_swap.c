/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:18:09 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/17 02:44:03 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void ft_sort_the_stack_a(t_stack **stack_a)
{
	t_stack *head;
	t_stack *same;
	int min;
	int pos;
	int size;
	

	head = (*stack_a);
	min = find_small(head);
	size = ft_lstsize(head);
	pos = find_place(head, min, size);
	same = (*stack_a);
	if(pos == 0)
	{
		while((*stack_a)->content != min)
	 		ft_rra(stack_a);
	}
	else if(pos == 1)
	{
		while((*stack_a)->content != min)
			ft_ra(stack_a);
	}
}
int sort_the_three(t_stack **head)
{
	t_stack *lst = (*head);
	int min = find_small((*head));
	int max = find_big((*head));
	int sum = 0;
	int middle;
	while(lst)
	{
		sum = sum + lst->content;
		lst = lst ->next;
	}
	middle = sum - max -min;
	printf("middle %d\n", middle);
	
	if(middle == (*head)->content && min == (*head) ->next ->content)
	{
		ft_sa(head);
	}
	else if(max == (*head)->content &&  middle == (*head)-> next -> content)
	{
		ft_sa(head);
		ft_rra(head);
	}
	else if(max == (*head) -> content && min == (*head) -> next -> content)
	{
		ft_ra(head);
	}
	else if(min == (*head) -> content && max == (*head) -> next -> content)
	{
		ft_sa(head);
		ft_ra(head);
	}
	else if(middle == (*head) -> content && max == (*head) -> next -> content)
	{
		ft_rra(head);
	}
	// lst = *head;
	// while(lst)
	// {
	// 	printf("satck a: %d \n", lst->content);
	// 	lst = lst->next;
	// }
	return (0);
}
void puch_to_a(t_stack **head_a, t_stack **head_b)
{ 
	t_stack *element = *head_b;
	t_stack *help_a;
	int min = find_small(*head_a);
	int max = find_big(*head_a);

	while(element)
	{
		while(help_a)
		{
			if(element->content  < min || element->content > max)
			{
				a = find_place(help_a, min, ft_lstsize((*head_a)));
				while(1)
				{
					if((*head_a) ->content == min)
						break;
					if(a == 0);
						ft_rra(head_a);
					else if(a == 1)
						ft_ra(head_a);
				}
			}
			else if()
		}
	}
}
int sort_the_five(t_stack **head_a, t_stack **head_b)
{
	int i;

	i = 0;
	while(i < 2)
	{
		ft_pb(head_b, head_a);
		i++;
	}
	sort_the_three(head_a);
	puch_to_a(head_a, head_b);
	while((*head_a))
	{
		printf("satck a: %d \n", (*head_a)->content);
		(*head_a) = (*head_a)->next;
	}
	puts("------");
	while((*head_b))
	{
		printf("satck b: %d \n", (*head_b)->content);
		(*head_b) = (*head_b)->next;
	}
	return (0);
	
}
int main(int ac, char **av)
{
	t_stack 	*new;
	//t_stack		*new1;
	t_stack 	*head_a;
	t_ac	st;
	t_stack		*head_b =	NULL;
	// t_stack *longest;
	// t_stack *longest_help;
	t_list val;
	//int			*log;
	int			*tab;
	int			i;
	
	if(ac < 2)
	{
		printf("Errero\n");
		return(0);
	}
	val.pos = (int *) malloc (sizeof(int ) * ac -1);
	tab = tableau(av, ac, &st);
	i = 0;
	while(i < st.size)
	{
		new = ft_lstnew(tab[i]);
		ft_lstadd_back(&head_a, new);
		i++;
	}
	if(st.size  <= 3)
	{
		sort_the_three(&head_a);
	}
	if(st.size <= 5)
	{
		sort_the_five(&head_a, &head_b);
	}
	// log = the_array(tab, ac, &val, &st);
	// i = 0;
	// longest =NULL;
	// while(i < val.max_longest)
	// {
	// 	new1 = ft_lstnew(log[i]);
	// 	ft_lstadd_back(&longest, new1);
	// 	i++;
	// }
	// longest_help = longest; 
	// move_to_stack_b(&head_b, &head_a, longest_help, ac);
	// move_to_stack_a(&head_a, &head_b);
	// ft_sort_the_stack_a(&head_a);
	// while(head_a)
	// {
	// 	printf("satck a: %d \n", head_a->content);
	// 	head_a = head_a->next;
	// }
	return(0);
}
