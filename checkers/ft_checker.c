/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:39:01 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/03 14:10:59 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void ft_check_sort(t_stack *head)
{
	t_stack *head1;
	int i;

	i = 0;
	head1 = head;
	while(head1->next)
	{
		if(head1->content > head1->next->content)
		{
			i =+1;
			break;
		}
		head1 = head1->next;
	}
	
	if(i == 1)
		ft_printf("KO\n");
	else
		ft_printf("OK\n");
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
	//printlist(*head);
}
char **fill_str(char **str)
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
void check_instraction(char *c)
{
	char **str;
	int i = 0;
	int x = 0;
	
	str = (char **)malloc((11 + 1) * sizeof(char *));
	str = fill_str(str);
	// while(str[i])
	// {
	// 	printf("|%s|", str[i]);
	// 	i++;
	// }
	
	i = 0;
	while(str[i])
	{
		if(ft_strcmp(c, str[i]) == 0)
		{
			x++;
			break ;
		}
		i++;
	}
	//printf ("number %d\n", x);
	if (x == 0)
	{
		ft_printf("Error\n");
		exit(-1);
	}
	i= 0;  
	while(str[i])
	{
		free(str[i]);
		i++;
	}
}
void ft_instraction(t_stack **head_a, t_stack **head_b, t_stack *lst)
{
	char **str;
	
	
	str = (char **)malloc((11 + 1) * sizeof(char *));
	str = fill_str(str);
	
	while(lst)
	{
		if(ft_strcmp(lst->cnt, "pa\n") == 0)
			ft_pa(head_a, head_b);
		else if(ft_strcmp(lst->cnt, "pb\n") == 0)
			ft_pb(head_b, head_a);
		else if(ft_strcmp(lst->cnt, "sa\n") == 0)
			ft_sa(head_a);
		else if(ft_strcmp(lst->cnt, "sb\n") == 0)
			ft_sa(head_b);
		else if(ft_strcmp(lst->cnt, "ss\n") == 0)
			ft_ss(head_a, head_b);
		else if(ft_strcmp(lst->cnt, "ra\n") == 0)
			ft_ra(head_a);
		else if(ft_strcmp(lst->cnt, "rb\n") == 0)
			ft_rb(head_b);
		else if(ft_strcmp(lst->cnt, "rr\n") == 0)
			ft_rr(head_a, head_b);
		else if(ft_strcmp(lst->cnt, "ra\n") == 0)
			ft_ra(head_a);
		else if(ft_strcmp(lst->cnt, "rb\n") == 0)
			ft_rb(head_b);
		else if(ft_strcmp(lst->cnt, "rrr\n") == 0)
			ft_rrr(head_a, head_b);
		lst = lst->next;	
	}
	// if(check_instraction(lst) == 1)
	// 	exit(0);
	// else
	// 	ft_printf("ok again\n");
	
}
void	ft_push_swap(t_stack *head_a, t_stack *head_b, int ac, char **av)
{
	s_ac	st;
	t_stack *lst = NULL;
	t_list	val;
	t_stack *new;
	int		*tab;
	char	*c;	
	
	val.pos = (int *) malloc (sizeof(int ) * ac -1);
	tab = tableau(av, ac, &st);
	make_list(&head_a, tab, st.size);
	while(1)
	{
		c = get_next_line(0);
		if(c == NULL)
			break;
		check_instraction(c);
		new = ft_lstnew_char(c);
		ft_lstadd_back(&lst, new);
	}
	//printlist(head_a);
	// printlist_char(lst);
	ft_instraction(&head_a, &head_b, lst);
	ft_check_sort(head_a);
	
}

void	f()
{
	system("leaks push_swap");
}

int main(int ac, char **av)
{
	t_stack *head_a = NULL;
	t_stack *head_b = NULL;


	atexit(f);
	if (ac < 2)
		return (0);
	ft_push_swap(head_a, head_b, ac, av);
	// while(1)
	// {

	// }
	return (0);
}