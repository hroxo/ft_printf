/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:15:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/13 23:54:13 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "../util/header.h"

size_t	print_args(va_list arg, char type)
{
	size_t	count;

	count = 0;
	if (type == 'd' || type == 'i')
		count = ft_putnbr_base(va_arg(arg, int), "0123456789");
	else if (type == 'x')
		count = ft_putnbr_base(va_arg(arg, int), "0123456789abcdef");
	else if (type == 'X')
		count = ft_putnbr_base(va_arg(arg, int), "0123456789ABCDEF");
	else if (type == 's')
		count = ft_putstr(va_arg(arg, char *));
	else if (type == 'c')
		count = ft_putchar(va_arg(arg, int));
	else if (type == '%')
		count = ft_putchar('%');
	else if (type == 'u')
		count = ft_putunsigned_int(va_arg(arg, unsigned int));
	else if (type == 'p')
		count = ft_putpointer(va_arg(arg, void *));
	return (count);
}
