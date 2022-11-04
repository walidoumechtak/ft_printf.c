/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:07:14 by woumecht          #+#    #+#             */
/*   Updated: 2022/11/04 15:49:47 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_vprintf(va_list ptr, int i, char *s);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_printUns(unsigned int n);
int	ft_hexaLower(size_t n);
int	ft_hexaUpper(unsigned int n);

#endif
