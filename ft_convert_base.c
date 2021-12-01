/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:41:58 by hharit            #+#    #+#             */
/*   Updated: 2021/11/26 11:42:00 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long n, char *base, int *count)
{
	*count += 1;
	if (n / 16)
		ft_put_ptr(n / 16, base, count);
	ft_putchar(base[n % 16]);
}

void	ft_convert_base(unsigned int n, char *b, int base, int *count)
{
	*count += 1;
	if (n / base)
		ft_convert_base(n / base, b, base, count);
	ft_putchar(b[n % base]);
}
