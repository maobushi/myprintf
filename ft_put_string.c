/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:13:19 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 19:47:02 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
