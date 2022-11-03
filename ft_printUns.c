/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printUns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woumecht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:16:33 by woumecht          #+#    #+#             */
/*   Updated: 2022/11/03 22:17:46 by woumecht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_printUns(unsigned int n)
{
    if (n >= 10)
        ft_putnbr(n / 10);
    ft_putchar((n % 10) + 48);
}