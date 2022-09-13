/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:11:37 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 19:15:08 by mobushi          ###   ########.fr       */
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
