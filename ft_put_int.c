/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:11:37 by mobushi           #+#    #+#             */
/*   Updated: 2023/04/21 08:57:42 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_int(int c)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = ft_itoa(c);
	while (tmp[i] != '\0')
	{
		ft_putchar(tmp[i], 1);
		i++;
	}
	free(tmp);
	return (--i);
}

int	ft_put_lhexa(unsigned int input)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	tmp = ft_calloc(ft_counter(input + 1), sizeof(char));
	if (!tmp)
		return (0);
	i = 0;
	if (input == 0)
	{
		ft_putchar('0', 1);
		free(tmp);
		return (0);
	}
	while (input > 0)
	{
		tmp[i] = HEX_L[input % 16];
		input = input / 16;
		i++;
	}
	j = i;
	while (i > 0)
		ft_putchar(tmp[--i], 1);
	free(tmp);
	return (j - 1);
}

int	ft_put_hexa(unsigned long input)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	tmp = ft_calloc(ft_counter(input + 1), sizeof(char));
	if (!tmp)
		return (0);
	i = 0;
	if (input == 0)
	{
		ft_putchar('0', 1);
		free(tmp);
		return (0);
	}
	while (input > 0)
	{
		tmp[i] = HEXA[input % 16];
		input = input / 16;
		i++;
	}
	j = i;
	while (i > 0)
		ft_putchar(tmp[--i], 1);
	free(tmp);
	return (j - 1);
}

int	ft_put_char(char c)
{
	ft_putchar(c, 1);
	return (0);
}
