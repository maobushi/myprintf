/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:10:45 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 19:46:55 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
