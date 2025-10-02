/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 00:50:32 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/02 17:24:36 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_printf(const char *format, ...);

int main()
{
	int a = 42;
	ft_printf("meu Printf\n");
	ft_printf("a: %i\n%i\n%i\n", a, -42, 0);
	printf("Printf NORMAL\n");
	printf("a: %i\n", a);
	return 0;
}
