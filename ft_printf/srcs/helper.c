/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:14:01 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/11 00:23:42 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

size_t	ft_putnbr_base(int nb, char *base)
{
	size_t	printed;
	long	nbl;
	char	c;
	int		len;

	printed = 0;
	nbl = nb;
	len = ft_strlen(base);
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl *= -1;
	}
	if (nbl > len)
	{
		printed += ft_putnbr_base(nbl / len, base);
	}
	c = base[nbl % len];
	printed += ft_putchar(c);
	return (printed);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	size_t	size;

	printf("value\n");
	size = ft_putnbr_base(atoi(argv[1]), argv[2]);
	printf("\n");
	printf("return value: %d\n", (int)size);
	return 0;
}
*/
