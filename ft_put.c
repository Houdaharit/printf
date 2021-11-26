/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:05:32 by hharit            #+#    #+#             */
/*   Updated: 2021/11/26 11:03:32 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		return (write(1, "(null)", 6));
	}
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

void	ft_putnbr(int nbr, int *count)
{
	unsigned int	n;

	*count += 1;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n / 10)
		ft_putnbr(n / 10, count);
	ft_putchar (n % 10 + '0');
}
