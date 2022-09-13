/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:10:45 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 16:42:58 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include"myprintf.h"
#include "printf.h"

int ft_put_uint(unsigned long long n)
{
	char *tmp;
	size_t i;
	i = 0;
	tmp = ft_itoa(n);
	while(tmp[i] != '\0')
	{
		ft_putchar(tmp[i],1);
		i++;
	}
	return(--i);

}
