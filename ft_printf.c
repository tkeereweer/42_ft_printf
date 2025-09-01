/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:32:27 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/09/01 15:48:09 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *str, va_list args, int ret, int i)
{
	if (str[i] == '%')
		ret += ft_putchar('%');
	else if (str[i] == 'c')
		ret += ft_putchar(va_arg(args, int));
	else if (str[i] == 's')
		ret += ft_putstr(va_arg(args, void *));
	else if (str[i] == 'p')
	{
		write(1, "0x", 2);
		ret += ft_puthex(va_arg(args, int), 0, 0) + 2;
	}
	else if (str[i] == 'd' || str[i] == 'i')
		ret += ft_putnbr(va_arg(args, int), 0);
	else if (str[i] == 'u')
		ret += ft_putnbr(va_arg(args, unsigned int), 0);
	else if (str[i] == 'x')
		ret += ft_puthex(va_arg(args, int), 0, 0);
	else if (str[i] == 'X')
		ret += ft_puthex(va_arg(args, int), 1, 0);
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		ret;

	va_start(args, str);
	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ret += ft_format(str, args, ret, i);
		}
		else
		{
			write(1, &str[i], 1);
			ret++;
		}
		i++;
	}
	va_end(args);
	return (ret);
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
