/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:53:51 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/27 02:52:18 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counterint(long int n)
{
	unsigned int	i;
	unsigned int	c;
	int				flag;

	i = 1;
	if (n < 0)
	{
		c = -n;
		flag = 1;
		while (c / 10)
		{
			i++;
			c /= 10;
		}
	}
	else
	{
		flag = 0;
		while (n / 10)
		{
			i++;
			n /= 10;
		}
	}
	return (i + flag);
}

int ft_putnbr(int nbr)
{
	unsigned int nb;
	long	int	tmp;
	
	tmp = nbr;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	nb = nbr;
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
		
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	return (ft_counterint(tmp));
}
