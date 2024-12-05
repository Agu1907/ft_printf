/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keezgi <keezgi@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:06:59 by keezgi            #+#    #+#             */
/*   Updated: 2024/11/25 19:50:57 by keezgi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upperhexa(unsigned int n)
{
	char	*list;
	int		count;
	int		tmp;

	list = "0123456789ABCDEF";
	count = 0;
	tmp = 0;
	if (n >= 16)
	{
		tmp += ft_upperhexa(n / 16);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	count += ft_putchar(list[(n % 16)]);
	if (count == -1)
		return (-1);
	return (count);
}
