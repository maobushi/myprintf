/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:05:39 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/12 23:24:08 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>


int ft_separate(int input,va_list ap);
int ft_put_per(void);
int ft_put_lhexa(unsigned int input);
int ft_put_hexa(unsigned int input);
int ft_put_uint(unsigned long long n);
int ft_put_int(int c);
int ft_put_pointer(unsigned long long input);
int ft_put_string(char *c);
int ft_put_char(char c);
char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
int	ft_digit_count(int n);
void	*ft_memset(void *buf, int ch, size_t n);
size_t ft_counter(int input);
int    ft_printf(const char *input, ...);

#endif