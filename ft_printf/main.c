/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 00:50:32 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/14 10:40:19 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_printf(const char *format, ...);

int main()
{
	int size;
	int b = 42;
	int *a = &b;

	printf("original\n");
	size = printf("abc%p\n", a);
	printf("size: %i\n", size);
	ft_printf("original\n");
	size = ft_printf("abc%p\n", a);
	printf("size: %i\n", size);
}
