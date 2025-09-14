/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:37:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/14 11:30:02 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "../util/header.h"

size_t	ft_putunsigned_int(unsigned int nb)
{
	size_t	count;
	char	c;

	count = 0;
	if (nb / 10 > 0)
		count += ft_putunsigned_int(nb / 10);
	c = (nb % 10) + '0';
	count += ft_putchar(c);
	return (count);
}

size_t	ft_putpointer(void *nb)
{
	size_t	count;

	count = ft_putstr("0x");
	count += ft_putnbr_base((long)nb, "0123456789abcdef");
	return (count);
}

/*
#include <stdio.h>
int main(void)
{
	int	count;

	count = ft_putunsigned_int(42);
	printf("\ncount: %d\n", count);
	count = ft_putunsigned_int(0);
	printf("\ncount: %d\n", count);
	count = ft_putunsigned_int(4294967295);
	printf("\ncount: %d\n", count);
}
*/
