/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:35:58 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/27 17:52:14 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_index(t_stack *lst)
{
	int i;

	i = 0;
	while(lst)
	{
		lst->index = i;
		lst = lst->next;
		i++;
	}

}
void printlist(t_stack *list)
{
	while(list)
	{
		printf("|||%d\n", list->content);
		list = list->next;
	}
}
int find_big(t_stack *node)
{
	int a;

	a = node -> content;
	while(node)
	{
		if(node -> content > a)
			a = node -> content;
		node = node -> next; 
	}
	return (a);
}
int find_small(t_stack *node)
{
	int a;

	a = node -> content;
	while(node)
	{
		if(node -> content < a)
			a = node -> content;
		node = node -> next; 
	}
	return (a);
}
t_stack	*link_lst(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	first = *head;
	last = *head;
	while (last-> next != NULL)
		last = last-> next;
	last -> next = first;
	return (last);
}
void	d_link(t_stack **stack, t_stack *last, t_stack *reg)
{
	while ((*stack)-> content != last-> content)
		(*stack) = (*stack)-> next;
	(*stack)-> next = NULL;
	(*stack) = reg;
}
void best_move_a(t_stack *stack_a, t_stack *help_b,  t_list *kk)
{
	int a;
	t_stack *temp;
	int size_a;
	int size_b;
	int l = 0;
	int h = 0;

	kk->mark = 0;
	temp = stack_a;
	ft_index(temp);
	temp = stack_a;
	printf(" b_move %d\n", help_b->b_move_a);
	a = 1;
	size_a = ft_lstsize(stack_a);
	temp = help_b;
	size_b = ft_lstsize(temp);
	printf("size_a : %d || size_b :%d \n", size_a, size_b);
	if(help_b->b_move_b < size_b / 2)
		kk->mark +=1;
	printf("->>>>> %d\n", help_b -> content);
	if(help_b -> content > find_big(stack_a) || help_b -> content < find_small(stack_a))
	{
		l = find_small(stack_a);
		h = 1;
	}
	while(1)
	{
		if(stack_a -> content == l && h == 1)
			break;
		if(stack_a->content < help_b->content && stack_a->next->content > help_b->content)
			break;
		a++;
		// printf("-> %d\n", a); 
		stack_a = stack_a->next;
	}
	if (a > (size_a / 2))
		a = size_a - a;
	help_b->b_move_a = a;
	printf("a : ->>%d\n", a);
	if(a < size_a / 2)
		kk->mark++;
	printf("kk ->>>>>%d\n",kk->mark);
}

t_stack *best_move_b(t_stack *stack_a, t_stack *stack_b, t_list *kk)
{
	t_stack *temp_b;
	t_stack *help_b;
	int size_b;
	
	temp_b = stack_b;
	ft_index(temp_b);
	temp_b = stack_b;
	size_b = ft_lstsize(temp_b);
	temp_b = stack_b;
	while(temp_b)
	{
		if(temp_b->index < size_b / 2)
			  temp_b->b_move_b = temp_b->index;
		else
			temp_b->b_move_b = size_b - temp_b->index;
		temp_b = temp_b->next;	  	
	}
	temp_b = stack_b;
	help_b = stack_b;
	temp_b = temp_b->next;
	while(temp_b)
	{
		if(help_b->b_move_b > temp_b->b_move_b)
		{
			help_b->b_move_b = temp_b->b_move_b;
		}	
		temp_b = temp_b->next;
	}
	return(help_b);
}
t_stack *find_the_smallest_moves_a_b(t_stack *stack_b)
{
	t_stack *smallest_move;
	t_stack *help_b;

	
	smallest_move = stack_b;
	help_b = stack_b;
	help_b = help_b->next;
	while(help_b)
	{
		smallest_move->best_move = smallest_move->b_move_a + smallest_move->b_move_a;
		help_b->best_move = help_b->b_move_b + help_b->b_move_a;
		if(smallest_move->best_move > help_b->best_move)
			smallest_move = help_b;
		help_b = help_b->next;
	}
	printf("small->>>><%d>\n", smallest_move->content);
	return(smallest_move);
}
int check_the_smallest_best_move(t_stack *first)
{
	if(first->b_move_a > first->b_move_b)
		return(first->b_move_b);
	return(first->b_move_a);
}
int check_the_biggest_best_move(t_stack *first)
{
	if(first->b_move_a < first->b_move_b)
		return(first->b_move_b);
	return(first->b_move_a);
}
int find_place(t_stack *stack_a, int m, int size)
{
	int x = 0;
	
	while(stack_a)
	{
		if(stack_a -> content == m)
			break;
		x++;
		stack_a = stack_a -> next;
	} 
	if(x > size / 2)
		return 0;
	return 1;
}

int find_the_big_number_st_a(t_stack *help_b, t_stack *first)
{
	int m;
	

	while(1)
	{
		if((help_b) ->content < first->content && (help_b)->next->content > first->content)
		{
			m = (help_b) -> next -> content;
			break;
		}
		help_b = help_b -> next;
	}
	return (m);
}
void ft_check_the_top(t_stack **stack_a, t_stack **stack_b,  int m, t_stack *first)
{
		while(1)
		{
			
		}
}
void put_the_number_in_st_a(t_stack **stack_a, t_stack **stack_b,t_stack *first, t_list *kk)
{

	t_stack *help_a = *stack_a;
	t_stack *help_b = *stack_b;
	int m;
	int a;
	// int range;
	// int small;
	// int big;
	int best_move;
	
	m = find_the_big_number_st_a(help_a, first);
	// if(kk -> mark == 1)
	// {	
		a = find_place(*stack_a, m, ft_lstsize(*stack_a));
		while(1)
		{
			if((*stack_a) -> content == m)
				break;
			if(a == 0)
				ft_rra(stack_a);
			if(a == 1)
				ft_ra(stack_a);
		}
		best_move = first->content;
		a = find_place(help_b, best_move, ft_lstsize(help_b));
		while(1)
		{
			if((*stack_b)->content == best_move)
				break;
			if(a == 0)
				ft_rrb(stack_b);
			else if(a == 1)
				ft_rb(stack_b);
		}
		ft_pa(stack_a, stack_b);
	// }
// 	if(kk->mark == 2 || kk->mark == 0)
// 	{
		
// 		if(kk->mark == 2)
// 	 	{
// 	 		small = check_the_smallest_best_move(first);
// 			big =check_the_biggest_best_move(first);
// 			while(small)
// 			{
// 				ft_rr(stack_a, stack_b);
// 				small--;
// 			}
// 			//a = ft_check_the_top(stack_a, stack_b,  m, first);
// 			 range = big - small;
// 			// while(range)
// 			// {
// 			// 	if(a = 0)
// 			// 		ft_ra(stack_a);
// 			// 	if(a = 1)
// 			// 		ft_rb(stack_b);
// 			// 	range--;
// 			// }
// 			// ft_pa(stack_a, stack_b);
// 		}
					
// }

	// small = check_the_smallest_best_move(first);
	// size_b = ft_lstsize(*stack_b);
	// while(size_b > 0)
	// {
	//  	 small = check_the_smallest_best_move(first);
	// 	if (kk->mark == 1)
	// 	{
	// 		while (small)
	// 		{
	// 			ft_rr(help_b, stack_b);
	// 			small--;
	// 		}
	// 	}
	// 	big =check_the_biggest_best_move(first);
	// 	if(kk->mark == 2)
	// 	{
	// 		while(small)
	// 		{
	// 			ft_rr(stack_a, stack_b);
	// 			small--;
	// 		}
	// 	}
	// 	printf("big one : %d\n", big);
	// 	range = big - small;
	// 	while(range)
	// 	{
	// 		if(kk->mark == 2)
	// 			ft_ra(stack_a);
	// 		else if(kk->mark == 0)
	// 			ft_rra(stack_a);
	// 		range--;
	// 	}
	// 	size_b--;
	// }
	
}
void move_to_stack_a(t_stack **stack_a, t_stack **stack_b, t_list *kk)
{
	t_stack *first;
	//t_stack *help;
	
	// while(stack_b){
	// int a = 0;
	// while(a < 2)
	// {
		first = find_the_smallest_moves_a_b(*stack_b);
		put_the_number_in_st_a(stack_a, stack_b, first, kk);
		best_move_a((*stack_a), (*stack_b), kk);
		best_move_b((*stack_a), (*stack_b), kk);
		first = find_the_smallest_moves_a_b(*stack_b);
		put_the_number_in_st_a(stack_a, stack_b, first, kk);
		// best_move_a((*stack_a), (*stack_b), kk);
		// best_move_b((*stack_a), (*stack_b), kk);
	// 	a++;
	// }
	// printf("the first : %d |||mark   : %d\n",first->content, kk->mark);
	// printf("-> %d -> %d\n",first-> b_move_a,first-> b_move_b);
	// put_the_number_in_st_a(stack_a, stack_b, first, kk);
	// printf("the first : %d |||mark   : %d\n",first->content, kk->mark);
	// printf("-> %d -> %d\n",first-> b_move_a,first-> b_move_b);
	// help = (*stack_b);
	// while (help)
	// {
	// 	printf("content : %d || b_move_a sta : %d|| b_move_b stb : %d \n", help->content ,help->b_move_a, help->b_move_b);
	// 	help = help->next;
	// }
} 

void best_move(t_stack *stack_a, t_stack *stack_b, t_list *kk)
{
	t_stack *help_b;
	
	help_b = best_move_b(stack_a, stack_b, kk);
	while(help_b)
	{
		best_move_a(stack_a ,help_b , kk);
		help_b = help_b->next;
	}
	while (stack_b)
	{
		printf("content : %d || b_move_a sta : %d|| b_move_b stb : %d \n", stack_b->content ,stack_b->b_move_a, stack_b->b_move_b);
		stack_b = stack_b->next;
	}
	
}
