/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:05:00 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/27 17:42:13 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counterxx(int long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

int	ft_puthexax(unsigned int n)
{
	char			*hexa;
	unsigned int	nb;

	nb = n;
	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_puthexax(n / 16);
		ft_puthexax(n % 16);
	}
	else
		write(1, &hexa[nb], 1);
	return (ft_counterxx(nb));
}
// int main()
// {
//     ft_puthexax(1000);
// }