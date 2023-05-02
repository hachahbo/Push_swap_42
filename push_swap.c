/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:18:09 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 23:14:31 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void	ft_sort_the_stack_a(t_stack **stack_a)
{
	t_stack	*head;
	t_stack	*same;
	int		min;
	int		pos;
	int		size;

	head = (*stack_a);
	min = find_small(head);
	size = ft_lstsize(head);
	pos = find_place(head, min, size);
	same = (*stack_a);
	if (pos == 0)
	{
		while ((*stack_a)->content != min)
			ft_rra(stack_a);
	}
	else if (pos == 1)
	{
		while ((*stack_a)->content != min)
			ft_ra(stack_a);
	}
}

void	make_list(t_stack **head, int *arr, int size)
{
	int		i;
	t_stack	*new;

	i = 0;
	while (i < size)
	{
		new = ft_lstnew(arr[i]);
		ft_lstadd_back(head, new);
		i++;
	}
}

void	ft_push_swap(t_stack *head_a, t_stack *head_b, int ac, char **av)
{
	t_ac	st;
	t_stack	*longest;
	t_list	val;
	int		*tab;

	val.pos = (int *) malloc (sizeof(int ) * ac -1);
	tab = tableau(av, ac, &st);
	make_list(&head_a, tab, st.size);
	if (st.size <= 5)
		check_five_three(&head_a, &head_b, &st);
	tab = the_array(tab, &val, &st);
	longest = NULL;
	make_list(&longest, tab, val.max_longest);
	mv_t_sb(&head_b, &head_a, longest, &st);
	move_to_stack_a(&head_a, &head_b);
	ft_sort_the_stack_a(&head_a);
	printlist(head_a);
}

int	main(int ac, char **av)
{
	t_stack	*head_a;
	t_stack	*head_b;

	if (ac < 2)
		return (0);
	head_a = NULL;
	head_b = NULL;
	ft_push_swap(head_a, head_b, ac, av);
	return (0);
}
