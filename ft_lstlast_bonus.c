/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:54:49 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 13:07:36 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	node = lst;
	return (node);
}

// int main()
// {
// 	char *str = "First Word";
// 	char *str1 = "Second Word";
// 	char *str2 = "Third Word";
// 	t_list	*first_node;
// 	t_list	*second_node;
// 	t_list	*third_node;
// 	t_list	*last_node;
// 	t_list	*lst = NULL;

// 	first_node = ft_lstnew(str);
// 	second_node = ft_lstnew(str1);
// 	third_node = ft_lstnew(str2);

// 	ft_lstadd_back(&lst, first_node);
// 	ft_lstadd_back(&lst, second_node);
// 	ft_lstadd_back(&lst, third_node);

// 	printf("First Node: %s\n", (char *)lst->content);
// 	printf("First Next: %p\n", lst->next);
// 	printf("Second Node: %s\n", (char *)lst->next->content);
// 	printf("Second Next: %p\n", lst->next->next);
// 	printf("Third Node: %s\n", (char *)lst->next->next->content);
// 	printf("Third Next: %p\n\n", lst->next->next->next);

// 	last_node = ft_lstlast(lst);
// 	printf("First Node: %s\n", (char *)last_node->content);
// 	printf("First Next: %p\n", last_node->next);

// 	free(first_node);
// 	free(second_node);
// 	free(third_node);
// }