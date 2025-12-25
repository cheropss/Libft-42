/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:01:25 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 09:47:14 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		c -= 32;
// 	}
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	char *str = "hello sahbi";
// 	char *str1 = ft_strmapi(str, f);
// 	printf("%s\n", str1);
// 	free(str1);
// }
