/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:51:39 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 19:25:27 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(char const *src)
{
	size_t	len;

	len = 0;
	if (!src)
		return (0);
	while (src[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	i = 0;
	size_src = my_strlen(src);
	if (size == 0)
		return (size_src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
