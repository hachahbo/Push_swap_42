/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:20:57 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/12 13:31:37 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <libc.h>
#include <stdio.h>
#include "libft/libft.h"

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


#endif