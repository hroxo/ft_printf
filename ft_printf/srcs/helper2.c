/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:37:07 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/11 13:55:42 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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
