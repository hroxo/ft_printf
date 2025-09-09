/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 22:38:01 by hroxo             #+#    #+#             */
/*   Updated: 2025/09/09 23:07:26 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	count_args(const char	*str)
{
	size_t	i;
	size_t	j;
	size_t	counter;
	char	flags[9] = "cspdiuxX%";
	
	counter = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == '%') 
		{
			while (flags[j])
			{
				if (str[i + 1] == flags[j])
				{
					counter++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (counter);
}
