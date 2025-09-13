/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:43:50 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/13 13:46:28 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h> //TODO kill me
#include <stdarg.h>
#include "util/header.h"

int ft_printf(const char *format, ...)
{
	size_t	arg_count;
	size_t	bytes_printed;
	va_list	args;
	size_t	i;
	char	*type;

	bytes_printed = 0;
	arg_count = count_args(format);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
				type = istype(format[i + 1]); //TODO char *istype(char c);
				if (type != NULL)
				{
					va_arg(args, type);
					bytes_printed += print_arg(args, type);//TODO size_tprint_arg(va_list args, type);
				}
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (bytes_printed);
}
