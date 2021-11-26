/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:36:45 by hharit            #+#    #+#             */
/*   Updated: 2021/11/26 11:02:33 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_t(char c)
{
	char	*str;

	str = "cspdiuxX%";
	while (*str && *str != c)
		str++;
	if (*str)
		return (1);
	return (0);
}

void	ft_conversion(char c, va_list ptr, int *count)
{
	char	*up;
	char	*low;

	low = "0123456789abcdef";
	up = "0123456789ABCDEF";
	if (c == '%')
		*count += ft_putchar('%');
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ptr, int), count);
	if (c == 'p')
	{
		ft_putstr("0x");
		*count += 2;
		ft_put_ptr(va_arg(ptr, unsigned long), low, count);
	}
	if (c == 's')
		*count += ft_putstr(va_arg(ptr, char *));
	if (c == 'c')
		*count += ft_putchar(va_arg(ptr, int));
	if (c == 'x')
		ft_convert_base(va_arg(ptr, unsigned int), low, 16, count);
	if (c == 'X')
		ft_convert_base(va_arg(ptr, unsigned int), up, 16, count);
	if (c == 'u')
		ft_convert_base(va_arg(ptr, unsigned int), "0123456789", 10, count);
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
