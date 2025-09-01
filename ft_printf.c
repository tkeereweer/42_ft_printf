/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:32:27 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/09/01 12:16:31 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *str, ...)
{
	va_list args;
	int		i;

	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				write(1, "%", 1);
			else if (str[i] == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			else if (str[i] == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (str[i] == 'p')
			{
				write(1, "0x", 2);
				ft_puthex_fd(va_arg(args, int), 1, 0);
			}
			else if (str[i] == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (str[i] == 'd')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (str[i] == 'x')
				ft_puthex_fd(va_arg(args, int), 1, 0);
			else if (str[i] == 'X')
				ft_puthex_fd(va_arg(args, int), 1, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(args);
}

// int	main(void)
// {
// 	int	nb;
// 	int	*ptr;

// 	nb = 42;
// 	ptr = &nb;
// 	ft_printf("%i\n", nb);
// 	ft_printf("%d\n", nb);
// 	ft_printf("%p\n", ptr);
// 	ft_printf("%x\n", nb);
// 	ft_printf("%X\n", nb);
// 	ft_printf("Hello World!\n");
// 	return (0);
// }
