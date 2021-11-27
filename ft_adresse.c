/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 03:28:39 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/27 04:03:33 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counterp(unsigned long n)
{
    int i;

    i = 0;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = n *-1;
    }
	while (n > 0)
	{
		i++;
        n /= 16;
	}
	return (i);
}

int adresse1(unsigned long n)
{
    unsigned long nb;
    
    nb = n;
    char hexa[16] = "0123456789abcdef";
    if (n < 0)
    {
        n = n * -1;
    }
    if (n >= 16)
    {
        adresse1(n / 16);
        adresse1(n % 16);
    }
    else
        write(1, &hexa[nb], 1);
    return (ft_counterp(nb));
}
int	ft_adresse(unsigned long nb)
{
	ft_putstr("0x");
	adresse1(nb);
	return (ft_counterp(nb) + 2);
}