/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:08:51 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/27 16:44:52 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

int	print1(const char s, va_list str)
{
	if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(str, int)));
	else if (s == 'u')
		return (ft_putnbr_un(va_arg(str, unsigned int)));
	else if (s == 'c')
		return (ft_putchar(va_arg(str, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(str, char *)));
	else if (s == 'x')
		return (ft_puthexa(va_arg(str, unsigned int)));
	else if (s == 'X')
		return (ft_puthexax(va_arg(str, unsigned int)));
	else if (s == 'p')
		return (ft_adresse(va_arg(str, unsigned long)));
	else if (s == '%')
		return (ft_putchar('%'));
	else
		return (ft_putstr(va_arg(str, char *)));
}

int	ft_printf(const char *s, ...)
{
	va_list		str;
	int			i;
	int			b;

	i = 0;
	b = 0;
	va_start (str, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			b = b + print1(s[i], str);
		}
		else
			b = b + ft_putchar(s[i]);
		i++;
	}
	va_end(str);
	return (b);
}
