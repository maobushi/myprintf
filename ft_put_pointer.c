/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:12:24 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 16:42:46 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include"myprintf.h"
#include "printf.h"

int ft_put_pointer(unsigned long long input)
{
	ft_putchar('0',1);
	ft_putchar('x',1);
	ft_putchar('1',1);
	ft_putchar('0',1);
	return(ft_put_hexa((int)input) + 4);
}