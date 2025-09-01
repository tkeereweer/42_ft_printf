/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 22:40:22 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/09/01 15:40:16 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int nb, int cap, int ret)
{
	unsigned int	n;
	char			base[17];

	if (cap == 0)
		ft_strlcpy(base, "0123456789abcdef", 17);
	else
		ft_strlcpy(base, "0123456789ABCDEF", 17);
	if (nb < 0)
	{
		n = -nb;
		ret += ft_putchar('-');
	}
	else
		n = nb;
	if (n < 16)
		ret += ft_putchar(base[n]);
	else
	{
		ret = ft_puthex(n / 16, cap, ret);
		ret = ft_puthex(n % 16, cap, ret);
	}
	return (ret);
}
