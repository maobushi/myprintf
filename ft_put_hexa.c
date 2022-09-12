/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:09:59 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/12 23:24:19 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"myprintf.h"

int ft_put_hexa(unsigned int input)
{
	char *tmp;
	tmp = ft_calloc(ft_counter(input + 1), sizeof(char));
    if (!tmp)
        return (0);
	char hexa[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	size_t i;
	size_t j;
	i = 0;
	if(input == 0)
	{
		ft_putchar('0',1);
		return(0);
	}
	while(input > 0)
	{
		tmp[i] = hexa[input % 16];
		input = input / 16;
		i++;
	}
	j = ++i;
	while(i>0)
		ft_putchar(tmp[--i],1);
	free(tmp);
	return(j -2);
}
