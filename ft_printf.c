/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobushi <mobushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:04:06 by mobushi           #+#    #+#             */
/*   Updated: 2022/09/10 18:50:15 by mobushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

//====指定子ごとの処理
size_t ft_put_character(va_list tmp)
{  
    printf("%c",va_arg(tmp,int));
    return(1);
}
size_t ft_put_string(va_list tmp)
{
    printf("%s",va_arg(tmp,char *));
    return(ft_strlen((const char *)tmp));
}        

void ft_put_pointer(va_list tmp)
{
    printf("%x",va_arg(tmp,unsigned long));
}


void ft_put_charandint(va_list tmp)
{
    printf("%d",va_arg(tmp,int));
}




//====指定子判別
size_t ft_discriminator(const char input,va_list tmp)
{

    if(input == 'c')
        return(ft_put_character(tmp));
    else if(input == 's')
        return(ft_put_string(tmp));
     else if(input == 'p')
        ft_put_pointer(tmp);
     else if(input == 'd' || input == 'i')
        ft_put_charandint(tmp);
    return(0);
}


//====本体
int    ft_printf(const char *input, ...)
{
    va_list tmp;
    va_start(tmp,input);
    size_t i;
    size_t j;
    j = 0;
    i = 0;
    while(input[i] != '\0')
    {    
        if(input[i] == '%')
            j = j - ft_discriminator(input[++i],tmp);
        i++;
        j++;
        //printf("%zu,%zu",i,j);
    }
    va_end(tmp);
    return(i);
}

int main(void)
{   
    //int hello = 10;
    //int *world = &hello;
   //printf("%d",ft_printf("Hello%cWo%cr%sld==\n",'H','i',"ka"));
    //printf("%d",ft_printf("%p",world));
    //ft_printf("%p",world);
    printf("%x",0100);
    //printf("%d",ft_printf("This%dis%iapen\n",345,"t"));
    //ft_printf("aa%d",10);
    
    
    return(0);
}