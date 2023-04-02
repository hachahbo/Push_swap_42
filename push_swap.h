/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:20:57 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/27 16:15:26 by hachahbo         ###   ########.fr       */
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
}t_list;


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
int		*tableau(char **av, int a);
char	*join_to_str(char **av, int a);
void	move_to_stack_b(t_stack **head_b, t_stack *head_a, t_stack *longest_help, int ac);
void	ft_reverse_rotate_the_largest(t_stack *head);
int		*the_array(int *arr, int ac, t_list *val);
void	best_move(t_stack *stack_a, t_stack *stack_b, t_list *kk);
void	best_move_a(t_stack *stack_a, t_stack *help_b, t_list *kk);
void	printlist(t_stack *node);
t_stack *find_the_smallest_moves_a_b(t_stack *stack_b);
void 	move_to_stack_a(t_stack **stack_a, t_stack **stack_b, t_list *kk);
#endif