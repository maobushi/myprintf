/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:18:48 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 16:41:37 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t ft_counter(int input)
{
	size_t i;
	
	i = 0;
	while(input > 0)
	{
		input = input / 10;
		i++;
	}
	return(i);
}
