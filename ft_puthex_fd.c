/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 22:40:22 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/08/31 23:08:54 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_fd(int nb, int fd, int cap)
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
		ft_putchar_fd('-', fd);
	}
	else
		n = nb;
	if (n < 16)
		ft_putchar_fd(base[n], fd);
	else
	{
		ft_puthex_fd(n / 16, fd, cap);
		ft_puthex_fd(n % 16, fd, cap);
	}
}
