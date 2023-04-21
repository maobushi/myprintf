/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:04:06 by mobushi           #+#    #+#             */
/*   Updated: 2023/04/21 08:56:02 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*tmp;
	unsigned char	c;

	tmp = (unsigned char *)buf;
	c = (unsigned char)ch;
	while (n > 0)
	{
		*tmp++ = c;
		n--;
	}
	return (buf);
}

int	ft_put_pointer(unsigned long input)
{
	ft_putchar('0', 1);
	ft_putchar('x', 1);
	return (ft_put_hexa((unsigned long)input) + 2);
}

int	ft_put_string(char *c)
{
	size_t	i;

	i = 0;
	if (c == NULL)
		return ((write(STDOUT_FILENO, "(null)", 6)) - 1);
	while (c[i] != '\0')
	{
		ft_putchar(c[i], 1);
		i++;
	}
	return (--i);
}

void	ft_putchar(char c, size_t i)
{
	write(1, &c, i);
}

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
