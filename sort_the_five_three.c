/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_the_five_three.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:33:26 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/01 15:33:33 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_conditions(t_stack **head, int min, int middle, int max)
{
	t_stack	*help;

	help = (*head)->next;
	if (middle == (*head)->content && min == help ->content)
		ft_sa(head);
	else if (max == (*head)->content && middle == help -> content)
	{
		ft_sa(head);
		ft_rra(head);
	}
	else if (max == (*head)-> content && min == help -> content)
		ft_ra(head);
	else if (min == (*head)-> content && max == help -> content)
	{
		ft_sa(head);
		ft_ra(head);
	}
	else if (middle == (*head)->content && max == help -> content)
		ft_rra(head);
}

int	sort_the_three(t_stack **head)
{
	t_stack	*help;
	int		min;
	int		max;
	int		sum;
	int		middle;

	min = find_small((*head));
	max = find_big((*head));
	help = (*head)->next;
	while (help)
	{
		sum = sum + help->content;
		help = help ->next;
	}
	middle = sum - max - min;
	ft_conditions(head, min, middle, max);
	return (0);
}

void	ft_push_b(t_stack **head_a, t_stack **head_b)
{
	t_stack	*help_a;
	int		max;
	int		a;
	int		i;

	help_a = *head_a;
	i = 0;
	while (i < 2)
	{	
		while (1)
		{
			max = find_small(*head_a);
			a = find_place(help_a, max, ft_lstsize(help_a));
			if ((*head_a)->content == max)
				break ;
			if (a == 1)
				ft_ra(head_a);
			if (a == 0)
				ft_rra(head_a);
		}
		ft_pb(head_b, head_a);
		i++;
	}
}

int	sort_the_five(t_stack **head_a, t_stack **head_b)
{
	ft_push_b(head_a, head_b);
	sort_the_three(head_a);
	ft_pa(head_a, head_b);
	ft_pa(head_a, head_b);
	return (0);
}

int	check_five_three(t_stack **head_a, t_stack **head_b, t_ac *st)
{
	if (st->size <= 3)
	{
		sort_the_three(head_a);
		printlist(*head_a);
		exit(0);
	}
	sort_the_five(head_a, head_b);
	printlist(*head_a);
	exit(0);
}
