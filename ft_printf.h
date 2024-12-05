/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keezgi <keezgi@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:00:22 by keezgi            #+#    #+#             */
/*   Updated: 2024/11/25 19:00:23 by keezgi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_unsigned_putnbr(unsigned int nb);
int	ft_putstr(char *c);
int	ft_lowerhexa(unsigned long n);
int	ft_upperhexa(unsigned int n);
int	ft_address(void *a);
int	ft_printf(const char *format, ...);

#endif
