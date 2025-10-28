/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:43:50 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/28 22:01:02 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	size_t	bytes_printed;
	va_list	args;
	size_t	i;

	i = 0;
	bytes_printed = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			bytes_printed += print_args(args, format[i + 1]);
			i++;
		}
		else
			bytes_printed += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (bytes_printed);
}
