/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help2_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:37:31 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/04 16:40:46 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

char	**fill_str(char **str)
{
	str[0] = "pa\n";
	str[1] = "pb\n";
	str[2] = "sa\n";
	str[3] = "sb\n";
	str[4] = "ss\n";
	str[5] = "ra\n";
	str[6] = "rb\n";
	str[7] = "rr\n";
	str[8] = "rra\n";
	str[9] = "rrb\n";
	str[10] = "rrr\n";
	str[11] = "\0";
	return (str);
}

void	check_instraction(char *c)
{
	char	**str;
	int		i;
	int		x;

	str = (char **)malloc((11 + 1) * sizeof(char *));
	str = fill_str(str);
	i = 0;
	x = 0;
	while (str[i])
	{
		if (ft_strcmp(c, str[i]) == 0)
		{
			x++;
			break ;
		}
		i++;
	}
	if (x == 0)
	{
		ft_printf("Error\n");
		exit(-1);
	}
	free(str);
}

void	ft_instraction_1(t_stack **head_a, t_stack **head_b, t_stack *lst)
{	
	while (lst)
	{
		if (ft_strcmp(lst->cnt, "pa\n") == 0)
			ft_pa(head_a, head_b);
		else if (ft_strcmp(lst->cnt, "pb\n") == 0)
			ft_pb(head_b, head_a);
		else if (ft_strcmp(lst->cnt, "sa\n") == 0)
			ft_sa(head_a);
		else if (ft_strcmp(lst->cnt, "sb\n") == 0)
			ft_sa(head_b);
		else if (ft_strcmp(lst->cnt, "ss\n") == 0)
			ft_ss(head_a, head_b);
		else if (ft_strcmp(lst->cnt, "ra\n") == 0)
			ft_ra(head_a);
		lst = lst->next;
	}
}

void	ft_instraction_2(t_stack **head_a, t_stack **head_b, t_stack *lst)
{	
	while (lst)
	{
		if (ft_strcmp(lst->cnt, "rb\n") == 0)
			ft_rb(head_b);
		else if (ft_strcmp(lst->cnt, "rr\n") == 0)
			ft_rr(head_a, head_b);
		else if (ft_strcmp(lst->cnt, "ra\n") == 0)
			ft_ra(head_a);
		else if (ft_strcmp(lst->cnt, "rb\n") == 0)
			ft_rb(head_b);
		else if (ft_strcmp(lst->cnt, "rrr\n") == 0)
			ft_rrr(head_a, head_b);
		lst = lst->next;
	}
}
