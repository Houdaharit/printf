/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:36:45 by hharit            #+#    #+#             */
/*   Updated: 2021/11/24 23:01:55 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_t(char c)
{
	char *str;

	str = "idusxXpc%";
	while (*str && *str != c)
		str++;
	if (*str)
		return (1);
	return (0);
}

void ft_conversion(char c, va_list ptr, int *count)
{
	if (c == '%')
		*count += ft_putchar('%');
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ptr, int), count);
	if (c == 'p')
	{
		ft_putstr("0x");
		*count += 2;
			ft_convert_hex_ptr(va_arg(ptr, long long), "0123456789abcdef", count);
	}
	if (c == 's')
		*count += ft_putstr(va_arg(ptr, char *));
	if (c == 'c')
		*count += ft_putchar(va_arg(ptr, int));
	if (c == 'x')
		ft_convert_hex_dec(va_arg(ptr, long), "0123456789abcdef", count);
	if (c == 'X')
		ft_convert_hex_dec(va_arg(ptr, long), "0123456789ABCDEF", count);
		if (c == 'u')
		ft_putnbr_u(va_arg(ptr, unsigned long), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		count;

	count = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (ft_check_t(str[1]))
			{
				ft_conversion(str[1], ptr, &count);
				str += 2;
			}
		}
		else
		{
			count += ft_putchar(*str);
			str++;
		}
		
	}
	va_end(ptr);
	return (count);
}
/*
int main (){
	int i = -1337;
	char x = 'a';
	printf(" %d\n",ft_printf("hello\n %c%s%x%Xdklewdew %c %d %i hello \t rejlwrew%p%p%x %u",'a',NULL,8797,-4897,'z',789789,7987,&i,&x,-87946897,-9223372036854775807));
	printf("\n ----- \n");
	printf(" %d\n",printf("hello\n %c%s%x%Xdklewdew %c %d %i hello \t rejlwrew%p%p%x %lu",'a',NULL,8797,-4897,'z',789789,7987,&i,&x,-87946897,-9223372036854775807));
	//printf(" %d\n",printf("hello %c",'c'));
}*/