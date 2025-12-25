/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:14:53 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/25 05:46:55 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

// int main()
// {
// 	char *str = "First Node";
// 	char *str1 = "Second Node";
// 	t_list *first_node = ft_lstnew(str);
// 	t_list *second_node = ft_lstnew(str1);
// 	t_list *lst = first_node;

// 	ft_lstadd_back(&lst, second_node);
// 	printf("First Node: %s\n", (char *)lst->content);
// 	printf("First Next: %p\n", lst->next);
// 	printf("Second Node: %s\n", (char *)lst->next->content);
// 	printf("Second Next: %p\n", lst->next->next);

// 	free(first_node);
// 	free(second_node);
// }