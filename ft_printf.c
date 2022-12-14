/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:04:06 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 19:25:31 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	size_t	i;
	size_t	j;
	va_list	ap;

	va_start(ap, input);
	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
			j += ft_separate(input[++i], ap);
		else
			ft_putchar(input[i], 1);
		j++;
		i++;
	}
	va_end(ap);
	return (j);
}
