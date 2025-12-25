/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:26:22 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 16:40:57 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_empty(void)
{
	char	*str;

	str = malloc(1);
	if (str)
		str[0] = '\0';
	return (str);
}

static int	are_equal(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	check_start(const char *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && are_equal(s1[i], set))
		i++;
	return (i);
}

static size_t	check_end(const char *s1, char const *set, size_t len)
{
	size_t	i;

	i = len - 1;
	while (i > 0 && are_equal(s1[i], set))
		i--;
	if (i == 0 && are_equal(s1[0], set))
		return (i);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	s1_len;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = check_start(s1, set);
	if (s1_len == 0 || start == s1_len)
		return (handle_empty());
	end = check_end(s1, set, s1_len);
	str = malloc((end - start + 1) + 1);
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
