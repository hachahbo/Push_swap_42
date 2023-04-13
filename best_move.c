/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:35:58 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/13 02:15:39 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
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
// t_stack	*link_lst(t_stack **head)
// {
// 	t_stack	*first;
// 	t_stack	*last;

// 	first = *head;
// 	last = *head;
// 	while (last-> next != NULL)
// 		last = last-> next;
// 	last -> next = first;
// 	return (last);
// }
// void	d_link(t_stack **stack, t_stack *last, t_stack *reg)
// {
// 	while ((*stack)-> content != last-> content)
// 		(*stack) = (*stack)-> next;
// 	(*stack)-> next = NULL;
// 	(*stack) = reg;
// }

// void best_move_a(t_stack *stack_a, t_stack *help_b,  t_list *kk)
// {
// 	int a;
// 	t_stack *temp;
// 	int size_a;
// 	int size_b;
// 	int l = 0;
// 	int h = 0;

// 	kk->mark = 0;
// 	ft_index(stack_a);
// 	temp = stack_a;
// 	a = 1;
// 	size_a = ft_lstsize(stack_a);
// 	temp = help_b;
// 	size_b = ft_lstsize(temp);
// 	printf("size_a : %d || size_b :%d \n", size_a, size_b);
// 	if(help_b->b_move_b < size_b / 2)
// 		kk->mark +=1;
// 	printf("->>>>> %d\n", help_b -> content);
// 	if(help_b -> content > find_big(stack_a) || help_b -> content < find_small(stack_a))
// 	{
// 		l = find_small(stack_a);
// 		h = 1;
// 	}
// 	while(1)
// 	{
// 		if(stack_a -> content == l && h == 1)
// 			break;
// 		if(stack_a->content < help_b->content && stack_a->next->content > help_b->content)
// 			break;
// 		a++;
// 		// printf("-> %d\n", a); 
// 		stack_a = stack_a->next;
// 	}
// 	if (a > (size_a / 2))
// 		a = size_a - a;
// 	help_b->b_move_a = a;
// 	printf("a : ->>%d\n", a);
// 	if(a < size_a / 2)
// 		kk->mark++;
// 	printf("kk ->>>>>%d\n",kk->mark);
// }
// void best_move_a(t_stack *stack_a, t_stack *help_b,  t_list *kk)
// {
// 	int a;
// 	int size_a;
// 	int size_b;

// 	if(!stack_a)
// 		return ;
// 	kk->mark = 0;
// 	ft_index(stack_a);
	
// 	a = 1;
// 	size_a = ft_lstsize(stack_a);
// 	size_b = ft_lstsize(help_b);
// 	printf("number  %d index %d\n", help_b->content, help_b->index);
// 	printf("\n size / 2 = %d\n ", size_b/2);
// 	if(help_b->index < size_b / 2)
// 		kk->mark +=1;
// 	printf("mark B :%d\n", kk->mark);
// 	int max = find_big(stack_a);
// 	int min = find_small(stack_a);
// 	int j = 0;
// 	t_stack *save = stack_a;
// 	while(save)
// 	{
// 		// printf("stack -> a %d\n", save -> content);
// 		save = save -> next;
// 	}
// 	if(help_b->content > max || help_b->content < min)
// 	{
// 		help_b -> b_move_a = ret(stack_a, min, size_a, &j);
// 		if(j != 0)
// 			kk->mark++;
// 		return ;
// 	}
// 	// 	while(1)
// 	// 	{
// 	// 		if(stack_a-> content == min)
// 	// 			break;
// 	// 		if(a == 0)
// 	// 			ft_rra(&stack_a);
// 	// 		if(a == 1)
// 	// 			ft_ra(&stack_a);
// 	// 	}
// 	// }
// 	// if(help_b -> content > find_big(stack_a) || help_b -> content < find_small(stack_a))
// 	// {
// 	// 	l = find_small(stack_a);
// 	// 	h = 1;
// 	// }
	
// 	while(1)
// 	{
// 		if(stack_a->content < help_b->content && stack_a->next->content > help_b->content)
// 			break;
// 		a++;
// 		stack_a = stack_a->next;
// 	}
// 	if (a > (size_a / 2))
// 		a = size_a - a;
// 	printf("a == %d\n", a);
// 	help_b->b_move_a = a;
// 	if(a < size_a / 2)
// 		kk->mark++;
// }

int ret(t_stack *stack_a, int min, int size, t_stack *last, t_stack *reg)
{
	d_link(&stack_a, last, reg);
	int a = 0;
	while(stack_a)
	{
		if(stack_a -> content == min)
			break;
		a++;
		stack_a = stack_a -> next;
	}		
	return a;
}

void count_sta_utils(t_stack *a, t_stack *elem, int min, int max)
{
	int x;
	int j;
	int size;

	x = 0;
	j = 0;
	size = ft_lstsize(a);
	t_stack *reg = a;
	t_stack *last = link_lst(&a);
	while(1)
	{
		if(elem -> content < min || elem -> content > max)
		{
			elem -> b_move_a = ret(a, min, size, last, reg);
			j = 1;
			break;
		}
		if(a -> content < elem -> content && a -> next -> content > elem -> content)
		{
			x++;
			break;
		}
		x++;
		a = a -> next;
	}
	if (elem -> b_move_a > (size / 2) && j == 1)
	{
		elem -> b_move_a = (size - elem -> b_move_a);
		elem -> mark+=1;
	}
	else if (x > (size / 2) && j == 0)
	{
		elem ->b_move_a = (size - x);
		elem -> mark +=1;
	}
	else if (x <= (size / 2) && j == 0)
		elem ->b_move_a = x;
	if(j == 0)
		d_link(&a, last, reg);
}

void best_move_b(t_stack **stack_b)
{
	t_stack *temp_b;
	int size;
	int x;

	if(!stack_b)
		return ;
	size = ft_lstsize(*stack_b);
	temp_b = (*stack_b);
	x = 0;
	while((*stack_b))
	{
		if(x <= (size / 2))
			(*stack_b) -> b_move_b = x;
		else
		{
			(*stack_b) -> b_move_b = (size - x);
				(*stack_b) -> mark += 1;
		}
		(*stack_b) = (*stack_b) -> next;
		x++;
	}
	(*stack_b) = temp_b;
}

void count_sta(t_stack *a, t_stack **b)
{
	t_stack *help = (*b);
	while((*b))
	{
		(*b) -> mark = 0;
		count_sta_utils(a,(*b), find_small(a), find_big(a));
		(*b) = (*b) -> next;
	}
	(*b) = help;
}
/*--------*/
int	go_pro(t_stack *go)
{
	int	a;

	if (go-> mark == 0 || go-> mark == 2)
	{
		if (go -> b_move_a < go -> b_move_b)
			a = go -> b_move_b;
		else
			a = go -> b_move_a;
	}
	if (go -> mark == 1)
		a = go -> b_move_a + go -> b_move_b;
	return (a);
}

t_stack	*find_best_mov(t_stack *all)
{
	t_stack	*head;
	t_stack	*save;

	head = all-> next;
	save = NULL;
	if (all -> next == NULL)
		return (save = all);
	save = all;
	while (head)
	{
		if (go_pro(head) < go_pro(all))
		{
			save = head;
			all = head;
		}
		head = head -> next;
	}
	return (save);
}
/*--------*/
// t_stack *find_the_smallest_moves_a_b(t_stack *stack_b)
// {
// 	t_stack *smallest_move;
// 	t_stack *help_b;

// 	help_b = stack_b;
// 	while()
// 	// smallest_move = stack_b;
// 	// help_b = stack_b;
// 	// help_b = help_b->next;
// 	// while(help_b)
// 	// {
// 	// 	smallest_move->best_move = smallest_move->b_move_a + smallest_move->b_move_a;
// 	// 	help_b->best_move = help_b->b_move_b + help_b->b_move_a;
// 	// 	if(smallest_move->best_move > help_b->best_move)
// 	// 		smallest_move = help_b;
// 	// 	help_b = help_b->next;
// 	// }
// 	// return(smallest_move);
// }
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

int find_the_big_number_st_a(t_stack *help_a, t_stack *first)
{
	int m = 0;
	int size = ft_lstsize(help_a);
	t_stack *reg = help_a;
	t_stack *last = link_lst(&help_a);
	while(size)
	{
		if((help_a) ->content < first->content && (help_a)->next->content > first->content)
		{
			m = (help_a) -> next -> content;
			break;
		}
		help_a = help_a -> next;
		size--;
	}
	return (d_link(&help_a, last, reg), m);
}
int ft_check_the_top(t_stack *stack_a,  int m)
{
		
	if(stack_a->content == m)
		return (1);
	return (0);
}
void put_the_number_in_st_a(t_stack **stack_a, t_stack **stack_b,t_stack *first)
{

	t_stack *help_a = *stack_a;
	t_stack *help_b = *stack_b;
	int m;
	int a;
	int range;
	int small;
	int big;
	int min = find_small(*stack_a);
	int best_move;
	if(first -> content < min|| first -> content > find_big(*stack_a))
	{
		a = find_place(*stack_a , min, ft_lstsize(*stack_a));
		while(1)
		{
			if((*stack_a) -> content == min)
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
		(*stack_b) -> mark = 3;
	}
	m = find_the_big_number_st_a(help_a, first);
	if(first -> mark == 1)
	{
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
	}
	if(first -> mark == 2 || first -> mark== 0)
	{
		
	 	if(first -> mark== 2)
	 	{
	 		small = check_the_smallest_best_move(first);
			big =check_the_biggest_best_move(first);
			range = big - small;
			while(small)
			{
				ft_rrr(stack_a, stack_b);
				small--;
			}
			a = ft_check_the_top(*stack_a,  m);
			while(range)
			{
				if(a == 0)
					ft_rra(stack_a);
				if(a == 1)
					ft_rrb(stack_b);
				range--;
			}
		}
		if(first -> mark == 0)
	 	{
			// puts("test2");
	 		small = check_the_smallest_best_move(first);
			big = check_the_biggest_best_move(first);
			range = big - small;
			// printf("------> small -> %d\n", small);
			// printf("------> big -> %d\n", big);
			while(small)
			{
				ft_rr(stack_a, stack_b);
				small--;
			}
			// printf("------> m -> %d\n", m);
			// printf("------> mm -> %d\n", (*stack_a) -> content);
			a = ft_check_the_top(*stack_a,  m);
			// printf("------> a -> %d\n", a);
			while(range)
			{
				if(a == 0)
					ft_ra(stack_a);
				if(a == 1)
					ft_rb(stack_b);
				range--;
			}
		}
	}
	ft_pa(stack_a, stack_b);	
}
void move_to_stack_a(t_stack **stack_a, t_stack **stack_b, t_ac ac)
{
		t_stack *first;
		t_stack *first1;
		t_stack *first2;
		// puts("------------");
		// puts("------------");
		// }
		// while((*stack_b))
		// {
		// 	printf("stack_b |%d|, best_a : %d best_b : %d \n", (*stack_b) -> content, (*stack_b) -> b_move_a, (*stack_b) -> b_move_b);
		// 	(*stack_b) =(*stack_b) -> next;
		// }
		int a = 0;
		count_sta(*stack_a, stack_b);
		best_move_b(stack_b);
		while((*stack_b))
		{
			// first = find_the_smallest_moves_a_b(*stack_b);
			first1 =  (*stack_a);
			// while((*stack_a))
			// {
			// 	printf("stack_a |%d|\n", (*stack_a) -> content);
			// 	(*stack_a) =(*stack_a) -> next;
			// }
			(*stack_a) = first1;
			first2 =  (*stack_b);
			// while((*stack_b))
			// {
			// 	printf("stack_b |%d|, best_a : %d best_b : %d mark : %d\n", (*stack_b) -> content, (*stack_b) -> b_move_a, (*stack_b) -> b_move_b, (*stack_b) -> mark);
			// 	(*stack_b) =(*stack_b) -> next;
			// }
			(*stack_b) = first2;
			first = find_best_mov(*stack_b);
			// printf("--------%d\n", first -> content);
			put_the_number_in_st_a(stack_a, stack_b, first);	
			if(ft_lstsize(*stack_b) == 0)
					break;
			count_sta(*stack_a, stack_b);
			best_move_b(stack_b);
			first1 =  (*stack_a);
			// while((*stack_a))
			// {
			// 	printf("stack_a |%d|\n", (*stack_a) -> content);
			// 	(*stack_a) =(*stack_a) -> next;
			// }
			(*stack_a) = first1;
			first2 =  (*stack_b);
			// while((*stack_b))
			// {
			// 	printf("stack_b |%d|, best_a : %d best_b : %d mark : %d\n", (*stack_b) -> content, (*stack_b) -> b_move_a, (*stack_b) -> b_move_b, (*stack_b) -> mark);
			// 	(*stack_b) =(*stack_b) -> next;
			// }
			(*stack_b) = first2;
			a++;
		}
} 

