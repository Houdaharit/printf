/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:55:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/26 10:27:47 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_convert_hex_ptr(long long n, char *base, int *count)
{
	unsigned long long	ul;

	ul = (unsigned long long)n;
	*count += 1;
	if (ul / 16)
		ft_convert_hex_ptr(ul / 16, base, count);
	ft_putchar(base[ul % 16]);
}

void	ft_convert_hex_dec(unsigned int n, char *base, int *count)
{
	*count += 1;
	if (n / 16)
		ft_convert_hex_dec(n / 16, base, count);
	ft_putchar(base[n % 16]);
}
