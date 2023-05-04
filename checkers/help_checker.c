/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:05:36 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/04 16:35:51 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	error_help(int a)
{
	(void)a;
	ft_printf("Error\n");
	exit(-1);
}

void	ft_check_sort(t_stack *head)
{
	t_stack	*head1;
	int		i;

	i = 0;
	head1 = head;
	while (head1->next)
	{
		if (head1->content > head1->next->content)
		{
			i++;
			break ;
		}
		head1 = head1->next;
	}
	if (i == 1)
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
	exit(0);
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (c1[i] == c2[i] && c1[i] != 0 && c2[i] != 0)
		i++;
	return (c1[i] - c2[i]);
}

void	printlist(t_stack *list)
{
	while (list)
	{
		ft_printf("stack a |%d|\n", list->content);
		list = list->next;
	}
}

void	printlist_char(t_stack *list)
{
	while (list)
	{
		ft_printf("stack a |%s|\n", list->cnt);
		list = list->next;
	}
}
