/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:16:23 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 17:53:46 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	my_bzero(void *s, size_t size)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	while (i < size)
	{
		src[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*result;
	size_t			total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_size = nmemb * size;
	if ((total_size / size) != nmemb)
		return (NULL);
	result = malloc(total_size);
	if (!result)
		return (NULL);
	my_bzero((void *)result, total_size);
	return ((void *)result);
}
