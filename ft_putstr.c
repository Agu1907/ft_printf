/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keezgi <keezgi@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:00:32 by keezgi            #+#    #+#             */
/*   Updated: 2024/11/25 19:02:04 by keezgi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (c == NULL)
	{
		if (!(ft_putstr("(null)")))
			return (-1);
		return (6);
	}
	while (c[i])
	{
		if (!write(1, &c[i], 1))
			return (-1);
		i++;
	}
	return (i);
}
