/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_separate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:04:26 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/12 23:24:10 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"myprintf.h"

int ft_separate(int input,va_list ap)
{
    if(input == 'c')
        return(ft_put_char(va_arg(ap,int)));
    else if(input == 's')
        return(ft_put_string(va_arg(ap,char *)));
    else if(input == 'p')
		return(ft_put_pointer((unsigned long long)va_arg(ap, void *)));
    else if(input == 'd' || input == 'i')
        return(ft_put_int(va_arg(ap,int)));
    else if(input == 'u')
        return(ft_put_uint((unsigned long long)va_arg(ap, unsigned long long)));
	else if(input == 'x')
		return(ft_put_hexa(va_arg(ap,unsigned int)));
	else if(input == 'X')
		return(ft_put_lhexa(va_arg(ap,unsigned int)));
	else if(input == '%')
		return(ft_put_per());

    return(0);
}
