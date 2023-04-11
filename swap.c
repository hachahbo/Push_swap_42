/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:13:31 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/07 08:33:53 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sa(t_stack **lst)
{
	t_stack *first = NULL;
	t_stack *second = NULL;
	
	if(!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
} 

void ft_sb(t_stack **lst)
{
	t_stack *first;
	t_stack *second;

	if(!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	first->next = second->next;
	second->next = first;
	(*lst) = second;
}

void ft_ss(t_stack **head, t_stack **lst)
{
	if(!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_sa(head);
	ft_sb(lst);
}


// int main()
// {
// 	t_stack *lst =  NULL;
// 	char *cont1 = "hamza";
// 	char *cont2 = "chahboune";
// 	char *cont3 = "from first to the last";
// 	t_stack *node1 = ft_lstnew(cont1);
// 	t_stack *node2 = ft_lstnew(cont2);
// 	t_stack *node3 = ft_lstnew(cont3);
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node1);
// 	ft_lstadd_front(&lst, node3);
// 	printf("-------before rotation \n");
// 	printlist(lst);
// 	ft_sa(&lst);
// 	printf("------after rotation \n");
// 	printlist(lst);
// 	return(0);
// }
