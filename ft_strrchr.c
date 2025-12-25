/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:30:09 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 19:27:32 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size_s;
	size_t	size;

	size_s = 0;
	while (s[size_s])
		size_s++;
	size = size_s + 1;
	while (size > 0)
	{
		if (s[size_s] == (char)c)
			return ((char *)&s[size_s]);
		if (size_s == 0)
			return (NULL);
		size_s--;
		size--;
	}
	return (NULL);
}
