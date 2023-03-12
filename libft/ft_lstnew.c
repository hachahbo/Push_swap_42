/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:25:26 by hachahbo          #+#    #+#             */
/*   Updated: 2023/03/11 18:55:17 by hachahbo         ###   ########.fr       */
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
// int main(void)
// {
//     char *str = "Hello, world!";
    
// 	int i = 1;
// 	while(i < ac)
// 	{
// 		node = ft_lstnew(i);
// 		node =node->next
// 	}
//     printf("Content of the node: %s\n",node->content);
//     free(node);

//     return 0;
// }