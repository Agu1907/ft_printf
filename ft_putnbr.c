/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keezgi <keezgi@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:00:29 by keezgi            #+#    #+#             */
/*   Updated: 2024/11/25 19:50:05 by keezgi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		if (!write(1, "-2147483648", 11))
			return (-1);
		return (11);
	}
	if (nb < 0)
	{
		count += write(1, "-", 1);
		if (count == -1)
			return (-1);
		nb = -nb;
	}
	if (nb > 9)
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar((nb % 10) + 48);
	}
	if (nb < 10)
		count += ft_putchar(nb + 48);
	return (count);
}
