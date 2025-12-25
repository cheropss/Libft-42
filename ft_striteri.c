/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:28:36 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/22 16:15:09 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void f(unsigned int i, char *s)
// {
// 	(void)i;
// 	*s -= 32;
// }

// int main()
// {
// 	char s[6] = "hello";
// 	ft_striteri(s, f);
// 	printf("%s\n", s);
// }
