/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:53:03 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/08 18:35:41 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	first_check_is_sort(t_stack *head)
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
	if (i != 1)
		return (1);
	return (0);
}
