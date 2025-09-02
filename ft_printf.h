/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 22:15:11 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/09/02 22:32:38 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_putchar(char c);
int		ft_putnbr(int n, int ret);
int		ft_putuint(unsigned int n, int ret);
int		ft_putstr(char *s);
int		ft_puthex(unsigned int n, int cap, int ret);
int		ft_putptr(void *ptr);
int		ft_printf(const char *str, ...);

#endif
