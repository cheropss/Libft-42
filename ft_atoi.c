/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:55:49 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 17:24:03 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	my_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
			len++;
		}
		else
			return (len);
	}
	return (len);
}

static const char	*skip_get_sign(const char *nptr, int *sign)
{
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			*sign = -1;
		}
		nptr++;
	}
	return (nptr);
}

static int	overflow_check(int sign, int len, long nb)
{
	if (nb < 0 && len == 19 && sign == 1)
		return (-1);
	else if (nb < 0 && len == 19 && sign == -1)
		return (0);
	return ((int)nb * sign);
}

int	ft_atoi(const char *nptr)
{
	long	nb;
	int		sign;
	int		len;
	int		i;

	i = 0;
	nb = 0;
	sign = 1;
	nptr = skip_get_sign(nptr, &sign);
	len = my_strlen(nptr);
	while (my_isdigit(nptr[i]))
	{
		nb = nb * 10 + nptr[i] - '0';
		i++;
	}
	if (nb >= 0 && nb <= 9223372036854775807)
		return (overflow_check(sign, len, nb));
	else
	{
		if (sign == 1 && len > 19 && nb != 0)
			return (-1);
		else if (sign == -1 && len > 19)
			return (0);
	}
	return (overflow_check(sign, len, nb));
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "87";
// 	printf("atoi:    %d\n", atoi(str));
// 	printf("ft_atoi: %d\n", ft_atoi(str));
// }