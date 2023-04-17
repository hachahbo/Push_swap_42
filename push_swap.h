/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:20:57 by hachahbo          #+#    #+#             */
/*   Updated: 2023/04/17 01:44:17 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <libc.h>
#include <stdio.h>
#include "libft/libft.h"

typedef struct k_list
{
	int *pos;
	int max_longest;
	int mark;
	int ac;
}t_list;

typedef struct st_ac
{
	int size;

} t_ac;


void 	ft_parcing(char  **tab);
void	ft_error(char **tab);
int		free_2d(char **l_str);
void	ft_sa(t_stack **lst);
void	ft_sb(t_stack **lst);
void	ft_ss(t_stack **head, t_stack **lst);
void	ft_ra(t_stack **lst);
void	ft_rb(t_stack **lst);
void	ft_rr(t_stack **head, t_stack **lst);
void	ft_rra(t_stack **head);
void	ft_rrb(t_stack **head);
void	ft_rrr(t_stack **head, t_stack **lst);
void	ft_pa(t_stack **lst_a, t_stack **head_b);
void	ft_pb(t_stack **lst_b, t_stack **head_a);
void	sort_list(t_stack **head);
void	index_sort_list(t_stack *head);
int		*tableau(char **av, int ac, t_ac *st);
char	*join_to_str(char **av, int a);
// void	move_to_stack_b(t_stack **head_b, t_stack *head_a, t_stack *longest_help, int ac);
void	sort_list(t_stack **head);
void	ft_reverse_rotate_the_largest(t_stack *head);
int *the_array(int *arr , int ac, t_list *val, t_ac *st);
void best_move_b(t_stack **stack_b);
void 	count_sta(t_stack *a, t_stack **b);
void	move_to_stack_b(t_stack **head_b ,t_stack **head_a, t_stack *longest_help, int ac);
void	printlist(t_stack *node);
t_stack *find_the_smallest_moves_a_b(t_stack *stack_b);
void move_to_stack_a(t_stack **stack_a, t_stack **stack_b);
int 	find_small(t_stack *node);
int 	find_big(t_stack *node);
int		find_place(t_stack *stack_a, int m, int size);
t_stack		*link_lst(t_stack **head);
void	d_link(t_stack **stack, t_stack *last, t_stack *reg);
int *fill_the_size(int *size, int ac, t_ac *st);
#endif