/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:11:05 by hharit            #+#    #+#             */
/*   Updated: 2021/11/26 10:59:14 by hharit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putstr_str(const char *str, va_list ptr);
void	ft_conversion(char c, va_list ptr, int *count);
int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int nbr, int *count);
void	ft_put_ptr(unsigned long n, char *base, int *count);
void	ft_convert_base(unsigned int n, char *b, int base, int *count);
int		ft_strlen(char *str);
int		ft_check_t(char c);
#endif
