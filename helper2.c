/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:37:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/28 22:01:23 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static size_t	ft_putpointerhelper(unsigned long nb, char *base)
{
	size_t	count;

	count = 0;
	if (nb / 16 > 0)
		count += ft_putpointerhelper(nb / 16, base);
	count += ft_putchar(base[nb % 16]);
	return (count);
}

size_t	ft_putpointer(void *nb)
{
	size_t	count;

	if (!nb)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	count += ft_putpointerhelper((unsigned long)nb, "0123456789abcdef");
	return (count);
}

size_t	ft_putnbr(long nb)
{
	long long	nbr;
	size_t		size;

	size = 0;
	nbr = nb;
	if (nbr < 0)
	{
		size += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr / 10 > 0)
		size += ft_putnbr(nbr / 10);
	size += ft_putchar((nbr % 10) + '0');
	return (size);
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
