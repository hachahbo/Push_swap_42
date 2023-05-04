/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:20:57 by hachahbo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/04 15:44:33 by hachahbo         ###   ########.fr       */
=======
/*   Updated: 2023/05/01 23:50:27 by hachahbo         ###   ########.fr       */
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <libc.h>
# include <stdio.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_list
{
	int	*pos;
	int	max_longest;
	int	mark;
	int	ac;
}	t_list;

typedef struct st_ac
{
	int	size;
	int	range;
	int	small;
	int	big;
	int	min;
	int	best_move;
	int	m;
	int	a;
	int	x;
	int	j;
}	t_ac;

void	ft_parcing(char **tab, t_ac *st);
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
void	ft_ra_a(t_stack **lst);
void	ft_rb_b(t_stack **lst);
void	ft_h_sb(t_stack **lst);
void	ft_rra_a(t_stack **head);
void	ft_rrb_b(t_stack **head);
void	sort_list(t_stack **head);
void	index_sort_list(t_stack *head);
void	ft_parcing_1(char **tab, t_ac *st);
void	ft_parcing_2(char **tab, t_ac *st);
void	ft_parcing_3(char **tab);
void	fill_the_position_array(t_list *val, t_ac *st);
int		*fill_the_size(int *size, t_ac *st);
int		*tableau(char **av, int ac, t_ac *st);
char	*join_to_str(char **av, int a);
void	sort_list(t_stack **head);
void	ft_reverse_rotate_the_largest(t_stack *head);
int		*the_array(int *arr, t_list *val, t_ac *st);
void	best_move_b(t_stack **stack_b);
void	count_sta(t_stack *a, t_stack **b);
void	mv_t_sb(t_stack **b, t_stack **a, t_stack *log, t_ac *st);
void	printlist(t_stack *node);
t_stack	*find_the_smallest_moves_a_b(t_stack *stack_b);
void	move_to_stack_a(t_stack **stack_a, t_stack **stack_b);
int		find_small(t_stack *node);
int		find_big(t_stack *node);
int		find_place(t_stack *stack_a, int m, int size);
t_stack	*link_lst(t_stack **head);
void	d_link(t_stack **stack, t_stack *last, t_stack *reg);
int		*fill_the_size(int *size, t_ac *st);
int		check_five_three(t_stack **head_a, t_stack **head_b, t_ac *st);
void	check_onlu_s(char *str);
char	*function_tojoin(char *result, char **av, int ac);
char	*join_to_str(char **av, int ac);
int		free_2d(char **l_str);
int		ft_size(char **ult_str);
void	error_help(int a);
void	check_char(char *c);
<<<<<<< HEAD
void	ft_free(char **str);
=======
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
t_stack	*link_lst(t_stack **head);
void	d_link(t_stack **stack, t_stack *last, t_stack *reg);
void	ft_index(t_stack *lst);
void	printlist(t_stack *list);
int		find_big(t_stack *node);
int		find_small(t_stack *node);
int		ret(t_stack *stack_a, int min, t_stack *last, t_stack *reg);
void	count_sta_utils(t_stack *a, t_stack *elem, int min, int max);
void	best_move_b(t_stack **stack_b);
void	count_sta(t_stack *a, t_stack **b);
int		go_pro(t_stack *go);
t_stack	*find_best_mov(t_stack *all);
int		check_the_smallest_best_move(t_stack *first);
int		check_the_biggest_best_move(t_stack *first);
void	check_mn_mx(t_stack **a, t_stack **b, t_stack *first, t_ac *fel);
void	ft_mark_one(t_stack **a, t_stack **b, t_stack *first, t_ac *fel);
void	ft_mark_two(t_stack **a, t_stack **b, t_stack *first, t_ac *fel);
void	ft_mark_zero(t_stack **a, t_stack **b, t_stack *first, t_ac *fel);
int		ft_check_the_top(t_stack *stack_a, int m);
void	ft_check_pos(t_stack *elem, int size, int x, int j);

#endif