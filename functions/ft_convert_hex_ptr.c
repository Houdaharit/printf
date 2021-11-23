/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:55:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/24 00:46:28 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len_b(long long n, int base)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= base;
		len ++;
	}
	return (len);
}

void	ft_convert_hex(long long n, char *str)
{
	if (n < 0)
		n *= -1;
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n / 16)
	{
		ft_convert_hex(n / 16, str);
		ft_putchar(str[n % 16]);
	}
}
