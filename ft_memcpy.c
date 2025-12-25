/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:06:34 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 19:21:16 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*dst;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	source = (unsigned char *)src;
	dst = (unsigned char *)dest;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dest);
}
