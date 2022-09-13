/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:05:39 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/13 19:32:04 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define HEX_L "0123456789ABCDEF"
# define HEXA "0123456789abcdef"

int		ft_separate(int input, va_list ap);
int		ft_put_per(void);
int		ft_put_lhexa(unsigned int input);
int		ft_put_hexa(unsigned long input);
int		ft_put_uint(unsigned int n);
int		ft_put_int(int c);
int		ft_put_pointer(unsigned long input);
int		ft_put_string(char *c);
int		ft_put_char(char c);
char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
int		ft_digit_count(int n);
void	*ft_memset(void *buf, int ch, size_t n);
size_t	ft_counter(int input);
int		ft_printf(const char *input, ...);
void	ft_putchar(char c, size_t i);

#endif