/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:55:56 by hharit            #+#    #+#             */
/*   Updated: 2021/11/24 14:55:21 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int nbr);
void	ft_convert_hex_ptr(long long n, char *base);
void	ft_convert_hex_dec(int n, char *base);
int		ft_strlen(const char *str);
int		ft_len_b(long long n);
int		ft_nbrlen(int n);
void	ft_putnbr_u(unsigned int nbr);
#endif
