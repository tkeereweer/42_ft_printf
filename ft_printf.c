/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:32:27 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/09/02 22:55:52 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char *str, va_list *args, int i)
{
	int	ret;

	ret = 0;
	if (str[i] == '%')
		ret = ft_putchar('%');
	else if (str[i] == 'c')
		ret = ft_putchar(va_arg(*args, int));
	else if (str[i] == 's')
		ret = ft_putstr(va_arg(*args, char *));
	else if (str[i] == 'p')
		ret = ft_putptr(va_arg(*args, void *));
	else if (str[i] == 'd' || str[i] == 'i')
		ret = ft_putnbr(va_arg(*args, int), 0);
	else if (str[i] == 'u')
		ret = ft_putuint(va_arg(*args, unsigned int), 0);
	else if (str[i] == 'x')
		ret = ft_puthex(va_arg(*args, int), 0, 0);
	else if (str[i] == 'X')
		ret = ft_puthex(va_arg(*args, int), 1, 0);
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
			ret += ft_format(str, &args, i);
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
