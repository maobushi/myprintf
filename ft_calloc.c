/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:15:40 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/12 23:24:32 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"myprintf.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (size > 0 && count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	tmp = malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	ft_memset (tmp, 0, size * count);
	return (tmp);
}