/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 04:02:21 by ydahni            #+#    #+#             */
/*   Updated: 2021/11/27 17:41:54 by ydahni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counterx(int long n)
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

int	ft_puthexa(unsigned int n)
{
	char			*hexa;
	unsigned int	nb;

	nb = n;
	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthexa(n / 16);
		ft_puthexa(n % 16);
	}
	else
		write(1, &hexa[nb], 1);
	return (ft_counterx(nb));
}
// int main()
// {
//     ft_puthexa(1000);
// }