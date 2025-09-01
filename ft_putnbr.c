/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:42:40 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/09/01 15:39:32 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int ret)
{
	unsigned int	nb;
	char			c;

	if (n < 0)
	{
		nb = -n;
		ret += ft_putchar('-');
	}
	else
		nb = n;
	if (nb < 10)
	{
		c = nb + '0';
		ret += ft_putchar(c);
	}
	else
	{
		ret = ft_putnbr(nb / 10, ret);
		ret = ft_putnbr(nb % 10, ret);
	}
	return (ret);
}
