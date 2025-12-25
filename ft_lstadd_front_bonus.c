/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:05:34 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/25 05:48:57 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	char *str = "hELLO";
// 	char *str2 = "Hello";
// 	t_list *first_node = ft_lstnew(str2);
// 	t_list *node = ft_lstnew(str);
// 	t_list *lst = first_node;

// 	ft_lstadd_front(&lst, node);
// 	printf("%s\n", (char *)lst->content);
// 	printf("%s\n", (char *)lst->next->content);
// 	printf("%p\n", lst->next);
// 	printf("%p\n", lst->next->next);

// 	free (first_node);
// 	free (node);
// }