/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:23:36 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/18 13:54:41 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	int	ptr = 1456;
// 	//char *ptr = "12349dsgfsdfgsdfg9";
// 	t_list *node = ft_lstnew(&ptr);
// 	printf("%d\n", *(int *)node->content);
// 	printf("%p\n", node->next);
// 	free(node);
// }