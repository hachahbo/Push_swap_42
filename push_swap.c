/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:18:09 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/12 13:41:54 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack 	*node;
	t_stack 	*head;
	t_stack		*data;
	int			*tab;
	int			i;
	
	if(ac < 2)
	{
		printf("invalid input, add some arguments pls");
		return(0);
	}
	
	tab = tableau(av, ac);
	i = 0;
	while(i < ac - 1)
	{
		node = ft_lstnew(tab[i]);
		ft_lstadd_back(&head, node);
		i++;
	}
	node = head;
	index_sort_list(node);
	node = head;
	sort_list(&node);
	data = head;
	i = 1;
	while(node)
	{
		printf("data[%d] : %d index %d \n",i,  node->content, node->index);
		node = node->next;
		i++;
	}
	return(0);
}
