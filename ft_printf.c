/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keezgi <keezgi@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:00:17 by keezgi            #+#    #+#             */
/*   Updated: 2024/11/25 20:01:17 by keezgi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_checker(const char *format, va_list arglist)
{
	int	i;

	i = 0;
	if (format[i] == 'c')
		return (ft_putchar(va_arg(arglist, int)));
	if (format[i] == 's')
		return (ft_putstr(va_arg(arglist, char *)));
	if (format[i] == 'p')
		return (ft_address(va_arg(arglist, void *)));
	if (format[i] == 'd')
		return (ft_putnbr(va_arg(arglist, int)));
	if (format[i] == 'i')
		return (ft_putnbr(va_arg(arglist, int)));
	if (format[i] == 'u')
		return (ft_unsigned_putnbr(va_arg(arglist, unsigned int)));
	if (format[i] == 'x')
		return (ft_lowerhexa(va_arg(arglist, unsigned int)));
	if (format[i] == 'X')
		return (ft_upperhexa(va_arg(arglist, unsigned int)));
	if (format[i] == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arglist;
	int		i;
	int		len;
	int		tmp;

	va_start(arglist, format);
	i = 0;
	len = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			tmp = ft_checker(&format[++i], arglist);
			if (tmp == -1)
				return (-1);
			len += tmp - 1;
		}
		else if (write(1, &format[i], 1) == -1)
			return (-1);
		i++;
		len++;
	}
	return (va_end(arglist), len);
}
