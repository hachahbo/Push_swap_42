/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:00:04 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/14 05:26:46 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void sort_list(t_stack **head)
// {
// 	t_stack *second = NULL;
// 	t_stack *min; 
// 	int i;
// 	i = 0;
	
// 	while(i < ft_lstsize(*head))
// 	{
// 		min = *head;
// 		second = min->next;
// 		while(second)
// 		{
// 			if (min->index != -1)
// 				min = min->next;
// 			if(min->content > second->content  && second->index == -1)
// 			{
// 				min= second; 
// 			}
// 			second = second->next;
// 		}
// 		min->index = i;
// 		i++;
// 	}
// }

// char *join_to_str(char **av, int a)
// {
// 	char *temp;
// 	char *temp2;
// 	char *result = ft_strjoin(av[1], " ");
// 	int i;
// 	i = 2;
// 	while(i < a)
// 	{
// 		temp = ft_strjoin(result, av[i]);
// 		temp2 = ft_strjoin(temp, " ");
// 		free (result);
// 		free (temp);
// 		result = temp2;
// 		i++;
// 	}
// 	return(result);
// }
// void index_sort_list(t_stack *head)
// {
// 	int index = -1;

// 	while(head != NULL)
// 	{
// 		head->index = index;
// 		head = head->next;
// 	}
// }
// int *tableau(char **av, int a)
// {
	
// 	char **ult_str;
// 	int size;
// 	int *t;
// 	int i;
// 	char *str;

// 	str = join_to_str(av, a);
// 	t = (int *)malloc(size * sizeof(int));
// 	ult_str = ft_split(str, ' ');
// 	i = 0;
// 	while(ult_str[i])
// 	{
// 		t[i] = ft_atoi(ult_str[i]);
// 		i++;
// 	}
// 	return(t);
// }
// int main(int ac, char **av)
// {
// 	t_stack  *node;
// 	t_stack  *head;
// 	t_stack 	*data;
// 	int		*tab;
// 	int		i;
	
// 	if(ac < 2)
// 	{
// 		printf("invalid input, add some arguments pls");
// 		return(0);
// 	}
	
// 	tab = tableau(av, ac);
// 	i = 0;
// 	while(i < ac - 1)
// 	{
// 		node = ft_lstnew(tab[i]);
// 		ft_lstadd_back(&head, node);
// 		i++;
// 	}
// 	node = head;
// 	index_sort_list(node);
// 	node = head;
// 	sort_list(&node);
// 	// int min = find_min(node);
// 	// printf("min  : %d || index : %d", min, head->index);
// 	data = head;
// 	i = 1;
// 	while(node)
// 	{
// 		printf("data[%d] : %d index %d \n",i,  node->content, node->index);
// 		node = node->next;
// 		i++;
// 	}
// 	return(0);
// }

void ft_sa(t_stack **lst)
{
	t_stack *first = NULL;
	t_stack *second = NULL;
	
	// if(!*lst || (*lst)->next == NULL)
	// 	return ;
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
void ft_rb(t_stack **lst)
{
	t_stack *last; 

	// if(!*lst || !(*lst)->next)
	// 	return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void ft_ra(t_stack **lst)
{
	t_stack *last; 

	// if(!*lst || !(*lst)->next)
	// 	return ;
	last = ft_lstlast(*lst);
	last->next = *lst;
	*lst = (*lst)->next;
	last->next->next = NULL;
}

void ft_rr(t_stack **head, t_stack **lst)
{
	if(!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_ra(head);
	ft_rb(lst);
}
void ft_pa(t_stack **lst_a, t_stack **head_b)
{
	t_stack *temp = NULL;

	if(!*lst_a || !(*lst_a)->next || !*head_b || !(*head_b)->next)
		return ;
	temp = (*head_b);
	*head_b = (*head_b)->next;
	ft_lstadd_front(lst_a, temp);
}

void ft_pb(t_stack **lst_b, t_stack **head_a)
{
	t_stack *temp = NULL;

	// if(!*lst_b || !(*lst_b)->next || !*head_a || !(*head_a)->next)
	// 	return ;
	temp = (*head_a);
	*head_a = (*head_a)->next;
	ft_lstadd_front(lst_b, temp);
}

void ft_rra(t_stack **head)
{
	t_stack *last;
	t_stack *b_last = NULL;

	last = *head;
	while(last->next != NULL)
	{
		b_last = last;
		last = last->next;
	}
	b_last->next = NULL; 
	last->next = *head;
	*head = last;
}
void ft_rrb(t_stack **head)
{
	t_stack *last;
	t_stack *b_last = NULL;

	last = *head;
	while(last->next != NULL)
	{
		b_last = last;
		last = last->next;
	}
	b_last->next = NULL; 
	last->next = *head;
	*head = last;
}

void ft_rrr(t_stack **head, t_stack **lst)
{
	if(!*lst || !(*lst)->next || !*head || !(*head)->next)
		return ;
	ft_rra(head);
	ft_rrb(lst);
}

int main()
{
	t_stack *lst =  NULL;
	t_stack *p_b = NULL;
	int cont1 = 1;
	int cont2 = 2;
	int cont3 =  3;
	t_stack *node1 = ft_lstnew(cont1);
	t_stack *node2 = ft_lstnew(cont2);
	t_stack *node3 = ft_lstnew(cont3);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node3);
	t_stack  *hd = lst;
	while(hd)
	{
		printf("%d\n", hd->content);
		hd = hd->next;
	}
	printf("-------before rotation \n");
	//printlist(lst);
	ft_pb(&p_b, &lst);
	printf("------after rotation \n");
	while(lst)
	{
		printf("%d\n", lst->content);
		lst = lst->next;
	}
	return(0);
}
