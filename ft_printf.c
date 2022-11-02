/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:29:10 by woumecht          #+#    #+#             */
/*   Updated: 2022/11/02 22:06:55 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *s, ...)
{
	va_list	ptr;
	int	i;

	i = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_vprintf(va_arg(ptr,  int), i, (char *)s);
		}
		else
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	va_end(ptr);
	return (0);
}
