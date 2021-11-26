/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:55:31 by hharit            #+#    #+#             */
/*   Updated: 2021/11/26 07:22:24 by hharit           ###   ########.fr       */
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

void	ft_convert_hex_dec(long  n, char *base, int *count)
{
	unsigned int	ul;

	ul = (unsigned int)n;
	*count += 1;
	if (ul / 16)
		ft_convert_hex_dec(ul / 16, base, count);
	ft_putchar(base[ul % 16]);
}
