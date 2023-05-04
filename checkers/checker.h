/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:34:52 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/04 16:38:54 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <libc.h>
# include "../ft_printf/ft_printf.h"
# include  "../libft/libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct st_ac
{
	int	size;
}	t_na;

typedef struct k_list
{
	int	*pos;
	int	max_longest;
	int	mark;
	int	ac;
}	t_list;

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
void	ft_free(char **str);
void	check_char(char *c);
int		ft_size(char **ult_str);
char	*join_to_str(char **av, int ac);
char	*function_tojoin(char *result, char **av, int ac);
void	check_onlu_s(char *str);
void	error_help(int a);
char	*get_next_line(int fd);
char	*ft_read_str(int fd, char *str);
char	*ft_get_line(char *str);
char	*ft_new_str(char *str);
char	*ft_strchr(const char *s, int c);
int		*tableau(char **av, int ac, t_na *st);
void	check_f(char **av);
void	ft_beta_parcing(char **tab, t_na *st);
void	ft_error(char **tab);
void	ft_parcing(char **tab, t_na *st);
void	ft_parcing_1(char **tab, t_na *st);
void	ft_parcing_2(char **tab, t_na *st);
void	ft_parcing_3(char **tab);
int		ft_str_is_alpha(char *str);
void	printlist_char(t_stack *list);
void	printlist(t_stack *list);
int		ft_strcmp(char *s1, char *s2);
void	ft_check_sort(t_stack *head);
void	ft_instraction_2(t_stack **head_a, t_stack **head_b, t_stack *lst);
void	ft_instraction_1(t_stack **head_a, t_stack **head_b, t_stack *lst);
void	check_instraction(char *c);
char	**fill_str(char **str);
void	make_list(t_stack **head, int *arr, int size);

#endif