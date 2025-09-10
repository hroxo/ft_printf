/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:56:45 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/11 00:25:36 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <stdarg.h>

size_t	print_arg(va_list args, char *type);
size_t	ft_strlen(char *str);
size_t	count_args(const char *str);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr_base(int nb, char *base);

#endif
