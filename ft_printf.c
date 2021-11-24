/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:36:45 by hharit            #+#    #+#             */
/*   Updated: 2021/11/24 14:54:48 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions/functions.h"
#include "ft_printf.h"

int	ft_putstr_str(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == '%')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

void	ft_conversion(char c, va_list ptr)
{
	if (c == '%')
		ft_putchar('%');
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ptr, int));
	if (c == 'p')
	{
		ft_putstr("0x");
		if (va_arg(ptr, long long))
			ft_convert_hex_ptr(va_arg(ptr, long long), "0123456789abcdef");
	}
	if (c == 's')
		ft_putstr(va_arg(ptr, char *));
	if (c == 'c')
		ft_putchar(va_arg(ptr, int));
	if (c == 'x')
		ft_convert_hex_dec(va_arg(ptr, int), "0123456789abcdef");
	if (c == 'X')
		ft_convert_hex_dec(va_arg(ptr, int), "0123456789ABCDEF");
	va_end(ptr);
}

void	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;

	i = 0;
	va_start(ptr, str);
	while (str[i])
	{
		i = ft_putstr_str(str);
		if (i < ft_strlen(str))
			ft_conversion(str[i + 1], ptr);
		i += 2;
	}
	va_end(ptr);
}

int main()
{
	ft_printf("Hello everyone %%");
}
