/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:04:06 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/11 23:31:28 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>

//definition
void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*tmp;
	unsigned char	c;

	tmp = (unsigned char *)buf;
	c = (unsigned char)ch;
	while (n > 0)
	{
		*tmp++ = c;
		n--;
	}
	return (buf);
}

void	ft_putchar(char c,size_t i) {
	write(1, &c, i);
}
int	ft_digit_count(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		digit++;
	else if (n < 0)
		digit++;
	while (n != 0)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

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

char	*ft_itoa(int n)
{
	int		digit;
	long	ln;
	char	*out;

	digit = ft_digit_count(n);
	ln = (long)n;
	out = (char *)ft_calloc(sizeof(char), digit + 1);
	if (out == NULL)
		return (NULL);
	if (n == 0)
		out[0] = '0';
	if (ln < 0)
	{
		ln = ln * -1;
		out[0] = '-';
	}
	while (ln > 0)
	{
		digit--;
		out[digit] = ln % 10 + '0';
		ln /= 10;
	}
	return (out);
}









//treatFunction
int ft_put_char(char c)
{
    ft_putchar(c,1);
    return(0);
} 

int ft_put_string(char *c)
{
    size_t i;
    i = 0;
    while(c[i] != '\0')
    {
        ft_putchar(c[i],1);
        i++;
    }
    return(--i);
}

int ft_put_int(int c)
{
    char *tmp;
    size_t i;
    i = 0;
    tmp = ft_itoa(c);
    while(tmp[i] != '\0')
    {
        ft_putchar(tmp[i],1);
        i++;
    }
    return(--i);
}


//separater
int ft_separate(int input,va_list ap)
{
    if(input == 'c')
        return(ft_put_char(va_arg(ap,int)));
    else if(input == 's')
        return(ft_put_string(va_arg(ap,char *)));
    
    else if(input == 'd' || input == 'i')
        return(ft_put_int(va_arg(ap,int)));
    else if(input == 'u')
        return(ft_put_uint(va_arg(ap,unsigned long long)))

    return(0);
}


//main
 int    ft_printf(const char *input, ...)
 {
    va_list ap;
    va_start(ap,input);

    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(input[i] != '\0')
    {
        if(input[i] == '%')
            j += ft_separate(input[++i],ap);
        else
            ft_putchar(input[i],1);
        //printf("i:%zu,j:%zu\n",i,j);
        j++;
        i++;
    }

    va_end(ap);
    return(j);
 }

 int main(void)
 {
    printf("%d",ft_printf("H%sKAKIN is %d %i","I",123456,987)); 
 }