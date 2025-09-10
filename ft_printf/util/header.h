/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:56:45 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/10 12:30:46 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"

size_t	print_arg(va_list args, char *type);
size_t	count_args(const char *str);

#endif
