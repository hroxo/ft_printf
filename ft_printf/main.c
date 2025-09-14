/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 00:50:32 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/14 20:03:47 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_printf(const char *format, ...);

int main()
{
	int a = 42;
	int *pa = &a;
	ft_printf("Print: Hello World: %s\nprint 42: %i\nprint *p: %p\nprint c: %c\n", "Hello World", 42, pa, 'c');
	return 0;
}
