/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:56:45 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/15 08:31:01 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <stdarg.h>

size_t	ft_putpointer(void *nb);
size_t	ft_putnbr(long nb);
size_t	print_args(va_list arg, char type);
size_t	ft_putunsigned_int(unsigned int nb);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr_base(int nb, char *base);

#endif
