/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:31:42 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 16:46:35 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if (size == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && (i < size))
	{
		if (s1[i] != s2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
