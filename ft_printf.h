/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:00:27 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/27 03:36:12 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int		ft_printf(const char *, ...);
int   ft_putnbr_un(unsigned int nbr);
int    ft_putnbr(int nbr);
int     ft_putchar(char c);
int    ft_putstr(char *str);
int ft_puthexa(unsigned int n);
int ft_puthexax(unsigned int n);
int ft_adresse(unsigned long n);


#endif