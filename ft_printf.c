/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:29:10 by woumecht          #+#    #+#             */
/*   Updated: 2022/11/03 22:08:08 by woumecht         ###   ########.fr       */
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
			ft_vprintf(ptr, &i, (char *)s);
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
int main()
{
	char c = 'c';
	printf("%c --- %s --- %d --- %d --- %% --- %u\n", c, NULL, 2001, -10, -20);
	ft_printf("%c --- %s --- %d --- %d --- %% --- %u", c, NULL, 2001, -10, -20);
}
