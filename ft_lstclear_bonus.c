/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:00:28 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/25 06:02:54 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void	del(void *node)
// {
// 	// free(node);
// 	(void)node;
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*ptr;

	if (!del || !lst)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		temp = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = temp;
	}
	*lst = NULL;
}

// void print_list(t_list *lst)
// {
// 	int i = 0;
// 	while (lst)
// 	{
// 		printf("  Node %d: %s (addr: %p, next: %p)\n", 
// 			i++, (char *)lst->content, lst, lst->next);
// 		lst = lst->next;
// 	}
// 	if (i == 0)
// 		printf("  (empty list)\n");
// 	printf("\n");
// }

// int main()
// {
// 	char *str = "First Word";
// 	char *str1 = "Second Word";
// 	char *str2 = "Third Word";
// 	t_list	*first_node;
// 	t_list	*second_node;
// 	t_list	*third_node;
// 	t_list	*lst = NULL;

// 	first_node = ft_lstnew(str);
// 	second_node = ft_lstnew(str1);
// 	third_node = ft_lstnew(str2);

// 	ft_lstadd_back(&lst, first_node);
// 	ft_lstadd_back(&lst, second_node);
// 	ft_lstadd_back(&lst, third_node);

// 	print_list(lst);
// 	printf("Calling ft_lstclear...\n");
// 	ft_lstclear(&lst, del);
// 	printf("After clear, lst = %p\n", (void *)lst);
// 	print_list(lst);
// }