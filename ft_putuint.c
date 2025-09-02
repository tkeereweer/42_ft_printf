/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:42:40 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/09/02 17:32:56 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int n, int ret)
{
	char			c;

	if (n < 10)
	{
		c = n + '0';
		ret += ft_putchar(c);
	}
	else
	{
		ret = ft_putnbr(n / 10, ret);
		ret = ft_putnbr(n % 10, ret);
	}
	return (ret);
}
