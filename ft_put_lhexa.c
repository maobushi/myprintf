/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:08:38 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 19:13:40 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
