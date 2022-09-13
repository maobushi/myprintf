/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:14:49 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 16:41:55 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "printf.h"
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

