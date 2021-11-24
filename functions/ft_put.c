/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:05:32 by hharit            #+#    #+#             */
/*   Updated: 2021/11/24 14:55:08 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	return (write(1, str, ft_strlen(str)));
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n / 10)
	{
		ft_putnbr(n / 10);
		ft_putchar (n % 10 + '0');
	}
}

void	ft_putnbr_u(unsigned int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	if (nbr / 10)
	{
		ft_putnbr_u(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
}

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

