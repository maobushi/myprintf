/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_separate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:04:26 by mobushi           #+#    #+#             */
/*   Updated: 2023/04/21 08:58:56 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_separate(int	input,	va_list	ap)
{
	if (input == 'c')
		return (ft_put_char(va_arg(ap, int)));
	else if (input == 's')
		return (ft_put_string(va_arg(ap, char *)));
	else if (input == 'p')
		return (ft_put_pointer((unsigned long )va_arg(ap, void *)));
	else if (input == 'd' || input == 'i')
		return (ft_put_int(va_arg(ap, int)));
	else if (input == 'u')
		return (ft_put_uint(va_arg(ap, unsigned int)));
	else if (input == 'x')
		return (ft_put_hexa(va_arg(ap, unsigned int)));
	else if (input == 'X')
		return (ft_put_lhexa(va_arg(ap, unsigned int)));
	else if (input == '%')
		return (ft_put_per());
	return (0);
}

unsigned int	ft_digit_ucount(unsigned int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		digit++;
	else if (n < 0)
		digit++;
	while (n != 0)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

static char	*ft_uinta(unsigned int ln)
{
	int		digit;
	char	*out;

	digit = ft_digit_ucount(ln);
	out = (char *)ft_calloc(sizeof(char), digit + 1);
	if (out == NULL)
		return (NULL);
	if (ln == 0)
		out[0] = '0';
	if (ln < 0)
	{
		ln = ln * -1;
		out[0] = '-';
	}
	while (ln > 0)
	{
		digit--;
		out[digit] = ln % 10 + '0';
		ln /= 10;
	}
	return (out);
}

int	ft_put_uint(unsigned int n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = ft_uinta(n);
	while (tmp[i] != '\0')
	{
		ft_putchar(tmp[i], 1);
		i++;
	}
	free(tmp);
	return (--i);
}

int	ft_put_per(void)
{
	ft_putchar('%', 1);
	return (0);
}
