/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:55:38 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 18:23:11 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(char *src)
{
	size_t	len;

	len = 0;
	if (!src)
		return (0);
	while (src[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;
	size_t	size_dest;

	i = 0;
	if (!src && !dest)
		return (0);
	size_src = my_strlen((char *)src);
	size_dest = my_strlen(dest);
	if (!src)
		return (size_dest);
	if (!dest)
		return (size_src);
	if (size_dest >= size)
		return (size + size_src);
	while (src[i] && (size_dest + i) < size - 1)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	if (size_dest + i < size)
		dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
