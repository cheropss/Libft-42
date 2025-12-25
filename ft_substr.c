/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:43:10 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 17:37:37 by acherifi         ###   ########.fr       */
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

static size_t	my_strlen(char const *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	actual_len;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	s_len = my_strlen(s);
	if (start >= s_len)
		return (handle_empty());
	actual_len = s_len - start;
	if (len < actual_len)
		actual_len = len;
	str = malloc(actual_len + 1);
	if (!str)
		return (NULL);
	while (s[start] && i < actual_len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
