/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 00:22:11 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/14 00:37:15 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_printf(const char *format, ...);

int main()
{
	int a = 42;
	char b = '2';
	char ab[100] = "Hello how are you %a %d \n\n ola\tpiu\n\n";
	int *pa = &a;

	int size;
	
	printf("Original\n");
	size = printf("a: %i\nb: %c\nab: %s\npa: %p\na em hex: %x\n %X\n", a, b, ab, pa, a, a);
	printf("\n\n==>size<==\n%i\n", size);
	ft_printf("Meu\n");
	ft_printf("a: %i\nb: %c\nab: %s\npa: %p\na em hex: %x\n %X\n", a, b, ab, pa, a, a);
	ft_printf("\n\n==>size<==\n%i\n", size);
}
