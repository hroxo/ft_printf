/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hroxo <hroxo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 21:49:51 by hroxo             #+#    #+#             */
/*   Updated: 2025/10/09 21:57:05 by hroxo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*next;

	head = *lst;
	next = NULL;
	if (!del || !*lst)
		return ;
	while (head)
	{
		next = head->next;
		del(head->content);
		free(head);
		head = next;
	}
	*lst = NULL;
}

/*
#include <stdio.h>

void	del(void *content)
{
	free(content); 
}

int	main(void)
{
	t_list *a, *b, *c;
	
	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));
	
	a->content = malloc(10);
	b->content = malloc(20);
	c->content = malloc(30);

	a->next = b;
	b->next = c;
	c->next = NULL;

	printf("Antes de clear: a=%p, b=%p, c=%p\n"
			, (void*)a, (void*)b, (void*)c);

	ft_lstclear(&a, del);

	if (a == NULL)
		printf("Lista limpa com sucesso!\n");
	else
		printf("Erro: a != NULL\n");

	return (0);
}
*/
