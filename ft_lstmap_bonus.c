/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:04:50 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 17:19:41 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

// void	*f(void *s)
// {
// 	char *str = (char *)s;
// 	char *new_str = strdup(str);
// 	int i;
// 	if (!new_str)
// 		return (NULL);
// 	while (new_str[i])
// 	{
// 		if (new_str[i] >= 'a' && new_str[i] <= 'z')
// 			new_str[i] -= 32;
// 		i++;
// 	}
// 	return (new_str);
// }

// void	del(void *content)
// {
// 	(void)content;
// }

// int main()
// {
// 	char *str1 = "string 1";
// 	char *str2 = "string 2";
// 	char *str3 = "string 3";
// 	t_list *node1 = my_lstnew(str1);
// 	t_list *node2 = my_lstnew(str2);
// 	t_list *node3 = my_lstnew(str3);
// 	t_list *lst = NULL;
// 	t_list *new_lst = NULL;

// 	printf("1\n");
// 	my_lstadd_back(&lst, node1);
// 	my_lstadd_back(&lst, node2);
// 	my_lstadd_back(&lst, node3);

// 	printf("2\n");
// 	new_lst = ft_lstmap(lst, f, del);
// 	printf("3\n");
// 	while (new_lst != NULL)
// 	{
// 		printf("6\n");
// 		printf("%s\n", (char *)new_lst->content);
// 		new_lst = new_lst->next;
// 	}
// 	printf("4\n");
// 	my_lstclear(&lst, del);
// 	my_lstclear(&new_lst, del);
// 	printf("5\n");
// 	return (0);
// }