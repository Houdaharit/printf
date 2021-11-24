/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:55:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/24 14:50:05 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

int	ft_len_b(long long n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 16;
		len ++;
	}
	return (len);
}

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_convert_hex_ptr(long long n, char *base)
{
	unsigned long long	ul;

	ul = (unsigned long long)n;
	if (n / 16)
		ft_convert_hex_ptr(n / 16, base);
	ft_putchar(base[n % 16]);
}

void	ft_convert_hex_dec(int n, char *base)
{
	unsigned int	ul;

	ul = (unsigned int)n;
	if (ul / 16)
		ft_convert_hex_dec(ul / 16, base);
	ft_putchar(base[ul % 16]);
}
