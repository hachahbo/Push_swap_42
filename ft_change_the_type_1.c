/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_the_type_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:29:23 by hachahbo          #+#    #+#             */
<<<<<<< HEAD:ft_change_the_type_1.c
/*   Updated: 2023/05/04 15:33:52 by hachahbo         ###   ########.fr       */
=======
/*   Updated: 2023/05/01 17:17:48 by hachahbo         ###   ########.fr       */
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611:ft_change_the_type_1.c
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_beta_parcing(char **tab, t_ac *st)
{
	int	j;

	j = 0;
	while (tab[j])
		check_char(tab[j++]);
	j = 0;
	while (tab[0][j])
	{
		if (ft_atoi(tab[0]) < INT_MIN || ft_atoi(tab[0]) > INT_MAX)
			ft_error(tab);
		j++;
	}
}

void	check_f(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{	
		if (av[i][0] == 0)
			error_help(0);
		i++;
	}
}

int	*tableau(char **av, int ac, t_ac *st)
{
	char	**ult_str;
	int		*t;
	int		i;
	char	*str;

	check_f(av);
	str = join_to_str(av, ac);
	t = (int *)malloc(ac * sizeof(int));
	ult_str = ft_split(str, ' ');
<<<<<<< HEAD:ft_change_the_type_1.c
	free(str);
=======
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611:ft_change_the_type_1.c
	st->size = ft_size(ult_str);
	ft_beta_parcing(ult_str, st);
	if (st->size == 1)
		exit(0);
	i = 0;
	ft_parcing(ult_str, st);
	while (ult_str[i])
	{
		t[i] = ft_atoi(ult_str[i]);
		i++;
	}
<<<<<<< HEAD:ft_change_the_type_1.c
	ft_free(ult_str);
=======
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611:ft_change_the_type_1.c
	return (t);
}
