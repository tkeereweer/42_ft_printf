/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkeerewe <mkeerewe@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 16:13:23 by mkeerewe          #+#    #+#             */
/*   Updated: 2025/10/01 14:02:18 by mkeerewe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				num;
	int				small_int;
	unsigned int	uint;

	num = 42;
	small_int = -2147483648;
	uint = 4294967295;
	ft_printf("--- %%c conversion ---\n");
	ft_printf("This prints: %c\n", 'c');
	printf("This prints: %c\n", 'c');
	ft_printf("--- %%s conversion ---\n");
	ft_printf("This prints: %s\n", "a string");
	printf("This prints: %s\n", "a string");
	ft_printf("This prints empty string: %s\n", "");
	printf("This prints empty string: %s\n", "");
	ft_printf("--- %%p conversion ---\n");
	ft_printf("This prints: %p\n", &num);
	printf("This prints: %p\n", &num);
	ft_printf("This prints NULL: %p\n", NULL);
	printf("This prints NULL: %p\n", NULL);
	ft_printf("--- %%d conversion ---\n");
	ft_printf("This prints: %d\n", num);
	printf("This prints: %d\n", num);
	ft_printf("This prints small int: %d\n", small_int);
	printf("This prints small int: %d\n", small_int);
	ft_printf("--- %%i conversion ---\n");
	ft_printf("This prints: %i\n", num);
	printf("This prints: %i\n", num);
	ft_printf("This prints small int: %i\n", small_int);
	printf("This prints small int: %i\n", small_int);
	ft_printf("--- %%u conversion ---\n");
	ft_printf("This prints unsigned: %u\n", uint);
	printf("This prints unsigned: %u\n", uint);
	ft_printf("--- %%x conversion ---\n");
	ft_printf("This prints: %x\n", num);
	printf("This prints: %x\n", num);
	ft_printf("This prints: %x\n", 0);
	printf("This prints: %x\n", 0);
	ft_printf("--- %%X conversion ---\n");
	ft_printf("This prints: %X\n", num);
	printf("This prints: %X\n", num);
	ft_printf("--- %%%% conversion ---\n");
	ft_printf("This prints: %%\n");
	printf("This prints: %%\n");
	ft_printf("--- BONUS ---\n");
	ft_printf("--- # flag ---\n");
	ft_printf("This prints: %#x\n", num);
	printf("This prints: %#x\n", num);
	ft_printf("This prints: %#X\n", num);
	printf("This prints: %#X\n", num);
	ft_printf("--- space flag ---\n");
	ft_printf("This prints: % d\n", num);
	printf("This prints: % d\n", num);
	ft_printf("This prints: % i\n", num);
	printf("This prints: % i\n", num);
	ft_printf("--- + flag ---\n");
	ft_printf("This prints: %+d\n", num);
	printf("This prints: %+d\n", num);
	ft_printf("This prints: %+i\n", num);
	printf("This prints: %+i\n", num);
	ft_printf("--- + and space flag ---\n");
	ft_printf("This prints: %+ d\n", num);
	// printf("This prints: %+ d\n", num);
	ft_printf("This prints: % +i\n", num);
	// printf("This prints: % +i\n", num);
	ft_printf("%q", 'c');
}

// cc -Wall -Wextra -Werror -L. -lftprintf tests.c -o tests
