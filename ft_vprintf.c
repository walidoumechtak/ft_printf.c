/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:10:27 by woumecht          #+#    #+#             */
/*   Updated: 2022/11/03 22:18:47 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_vprintf(va_list ptr, int *i, char *s)
{
	if (s[*i] == 'c')
		ft_putchar(va_arg(ptr,int));
	else if (s[*i] == 's')
		ft_putstr(va_arg(ptr, char *));
	else if (s[*i] == 'd' || s[*i] == 'i')
		ft_putnbr(va_arg(ptr, int));
	else if (s[*i] == '%')
		ft_putchar('%');
	else if (s[*i] == 'u')
		ft_printUns(va_arg(ptr, unsigned int));
	*i = *i + 1;
}