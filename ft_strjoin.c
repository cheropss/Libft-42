/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:58:14 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/22 19:25:33 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(char const *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

static void	add_to_str(char *str, char const *s, size_t start, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		str[start] = s[i];
		start++;
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	start;

	start = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_len = my_strlen(s1);
	s2_len = my_strlen(s2);
	str = malloc(s1_len + s2_len + 1);
	if (!str)
		return (NULL);
	add_to_str(str, s1, start, s1_len);
	start = s1_len;
	add_to_str(str, s2, start, s2_len);
	str[s1_len + s2_len] = '\0';
	return (str);
}
