/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:14:01 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/10 12:30:45 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "header.h"

size_t	print_arg(va_list args, char type)
{
	size_t	printed_char;

	if (type == "char")
	{
		ft_putstr_fd(args);
	}
	return (0);
}
