/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:18:46 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 09:50:03 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(long nb, int *is_negative)
{
	int	count;

	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		*is_negative = 1;
		count++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		len_nb;
	int		is_negative;

	nb = n;
	is_negative = 0;
	len_nb = check_len(nb, &is_negative);
	if (nb < 0)
		nb = -nb;
	str = malloc((len_nb + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (is_negative)
		str[0] = '-';
	str[len_nb] = '\0';
	while (--len_nb >= is_negative)
	{
		str[len_nb] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
