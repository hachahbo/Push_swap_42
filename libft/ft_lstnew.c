/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:25:26 by hachahbo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/04 15:45:06 by hachahbo         ###   ########.fr       */
=======
/*   Updated: 2023/05/01 22:46:09 by hachahbo         ###   ########.fr       */
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		return (0);
	tmp->content = content;
	tmp->next = NULL;
	return (tmp);
}
<<<<<<< HEAD

t_stack	*ft_lstnew_char(char *content)
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	if (!tmp)
		return (0);
	tmp->cnt = content;
	tmp->next = NULL;
	return (tmp);
}
=======
>>>>>>> b47adee2253874da46db1fb3d570a40ec4d55611
