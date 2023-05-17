/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:30:55 by hachahbo          #+#    #+#             */
/*   Updated: 2023/05/14 05:50:46 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	ft_free_st(t_stack *longest)
{
	while (longest)
	{
		free(longest);
		longest = longest->next;
	}
}

void	ft_check_val(int *tab)
{
	if (!tab)
	{
		free(tab);
		exit(0);
	}
}
