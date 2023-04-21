/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:18:48 by mobushi           #+#    #+#             */
/*   Updated: 2023/04/21 09:04:41 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_counter(int input)
{
	size_t	i;

	i = 0;
	while (input > 0)
	{
		input = input / 10;
		i++;
	}
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	ft_memset (tmp, 0, size * count);
	return (tmp);
}

int	ft_digit_count(int n)
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

char	*ft_itoa(int n)
{
	int		digit;
	long	ln;
	char	*out;

	digit = ft_digit_count(n);
	ln = (long)n;
	out = (char *)ft_calloc(sizeof(char), digit + 1);
	if (out == NULL)
		return (NULL);
	if (n == 0)
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
