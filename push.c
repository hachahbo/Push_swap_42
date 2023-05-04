/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:43:43 by hachahbo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/04 15:19:12 by hachahbo         ###   ########.fr       */
=======
/*   Updated: 2023/05/01 17:35:01 by hachahbo         ###   ########.fr       */
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **lst_a, t_stack **head_b)
{
	t_stack	*temp;

	temp = NULL;
	if (!*head_b)
		return ;
	ft_printf("pa\n");
	if (!*head_b)
		return ;
	temp = (*head_b);
	*head_b = (*head_b)->next;
	ft_lstadd_front(lst_a, temp);
}

void	ft_pb(t_stack **lst_b, t_stack **head_a)
{
	t_stack	*temp;

	temp = NULL;
	if (!*head_a || !(*head_a)->next)
		return ;
	ft_printf("pb\n");
	if (!*head_a)
		return ;
	temp = (*head_a);
	*head_a = (*head_a)->next;
	ft_lstadd_front(lst_b, temp);
}
<<<<<<< HEAD

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
=======
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
