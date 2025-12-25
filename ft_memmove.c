/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:04:44 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 19:21:42 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	*my_cpy(unsigned char *d, unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (src >= dest)
		dst = my_cpy(dst, source, n);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			dst[n] = source[n];
		}
	}
	return (dest);
}
