/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherifi <acherifi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:29:58 by acherifi          #+#    #+#             */
/*   Updated: 2025/10/26 13:26:47 by acherifi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	c = (nb % 10) + '0';
	write(fd, &c, 1);
}
