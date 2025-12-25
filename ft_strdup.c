/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:12:31 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/21 09:35:03 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s)
		return (NULL);
	size = my_strlen(s);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
