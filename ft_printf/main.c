/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 00:50:32 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/14 01:18:27 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_printf(const char *format, ...);

int main()
{
	int size;
	char *a = malloc(1);
	a = NULL;
	printf("original\n");
	size = printf("abc%s\n", a);
	printf("size: %i\n", size);
	ft_printf("original\n");
	size = ft_printf("abc%s\n", a);
	printf("size: %i\n", size);

	printf("++2nd TEsT\n\n");
	ft_printf("GOal 245 %i", 245);
}
