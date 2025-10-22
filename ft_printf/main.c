/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:24:19 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/22 08:43:02 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>


void check_result(int a, int b, char *str)
{
	if (a != b)
	{
		printf("\nfailed %s\n", str);
	}
	else {
		printf("\nSucess at %s\n", str);
	}
}
int	main()
{
	unsigned int a = 42;
	int b = -42;
	int c = INT_MAX;
	int d = INT_MIN;

	int *pb = &b;
	int *pd = &d;
	int check;
	int check2;

	ft_printf("==>INTEGERS<==\n");
	check = ft_printf("a: %u\nb: %i\nc: %i\nd: %i\n", a,b ,c, d);
	check2 = printf("a: %u\nb: %i\nc: %i\nd: %i\n", a,b ,c, d);
	check_result(check, check2, "INTEGERS");

	ft_printf("==>Strings<==\nMEU:\n");
	check = ft_printf("%s", "Ola\ntudo bem\tsim e contigo\n:D");
	printf("==>Strings<==\nOriginal:\n");
	check2 = printf("%s", "Ola\ntudo bem\tsim e contigo\n:D");
	check_result(check, check2, "Strings");

	ft_printf("==>HEX<==\n");
	check = ft_printf("a: %X\nb: %x\nc: %X\nd: %x\n", a,b ,c, d);
	check2 = printf("a: %X\nb: %x\nc: %X\nd: %x\n", a,b ,c, d);
	check_result(check, check2, "HEX");

	ft_printf("==>POINTERS<==\n");
	check = ft_printf("pb: %p\npd: %p\n", pb, pd);
	check2 = printf("pb: %p\npd: %p\n", pb, pd);
	check_result(check, check2, "POINTERS");

	ft_printf("==>%%<==\n");
	check = ft_printf("%%");
	check2 = printf("%%");
	check_result(check, check2, "%");
	return 0;
}
