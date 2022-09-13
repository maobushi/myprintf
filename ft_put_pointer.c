/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:12:24 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 19:11:27 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long input)
{
	ft_putchar('0', 1);
	ft_putchar('x', 1);
	return (ft_put_hexa((unsigned long)input) + 2);
}
