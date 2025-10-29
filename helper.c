/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:14:01 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/29 10:08:57 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr(char *str)
{
	size_t	i;
	char	*isnull;

	isnull = "(null)";
	i = 0;
	if (!str)
	{
		while (isnull[i])
		{
			ft_putchar(isnull[i]);
			i++;
		}
		return (6);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

size_t	ft_putnbr_base(long nb, char *base)
{
	size_t	printed;
	char	c;
	int		len;

	printed = 0;
	len = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= len)
	{
		printed += ft_putnbr_base(nb / len, base);
	}
	c = base[nb % len];
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
