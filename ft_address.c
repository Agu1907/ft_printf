/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keezgi <keezgi@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:00:00 by keezgi            #+#    #+#             */
/*   Updated: 2024/11/25 19:53:42 by keezgi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address(void *a)
{
	int	count;
	int	tmp;

	count = 0;
	tmp = 0;
	if (a == 0)
	{
		count += (ft_putstr("(nil)"));
		if (count == -1)
			return (-1);
		return (5);
	}
	count += ft_putstr("0x");
	if (count == -1)
		return (-1);
	tmp += ft_lowerhexa((unsigned long)a);
	if (tmp == -1)
		return (-1);
	count += tmp;
	return (count);
}
