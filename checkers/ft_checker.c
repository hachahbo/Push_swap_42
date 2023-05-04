/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:39:01 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/04 16:40:25 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_g_n_l(t_stack **lst)
{
	char	*c;
	t_stack	*new;

	while (1)
	{
		c = get_next_line(0);
		if (c == NULL)
			break ;
		check_instraction(c);
		new = ft_lstnew_char(c);
		ft_lstadd_back(lst, new);
	}
}

void	ft_push_swap(t_stack *head_a, t_stack *head_b, int ac, char **av)
{
	t_na	st;
	t_stack	*lst;
	int		*tab;

	tab = tableau(av, ac, &st);
	make_list(&head_a, tab, st.size);
	lst = NULL;
	ft_g_n_l(&lst);
	free(tab);
	ft_instraction_1(&head_a, &head_b, lst);
	ft_instraction_2(&head_a, &head_b, lst);
	ft_check_sort(head_a);
}

int	main(int ac, char **av)
{
	t_stack	*head_a;
	t_stack	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (ac < 2)
		return (0);
	ft_push_swap(head_a, head_b, ac, av);
}
