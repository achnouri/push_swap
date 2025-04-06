/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grb_coll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:54:54 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/24 07:44:16 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

void	free_all(t_collect **head)
{
	t_collect	*current;
	t_collect	*next;

	if (!*head || !head)
		return ;
	current = *head;
	while (current)
	{
		next = current->next;
		free(current->data);
		free(current);
		current = next;
	}
	*head = NULL;
}

void	*ft_malloc(size_t size, int mode)
{
	static t_collect	*head;
	t_collect			*node;
	void				*data;

	data = NULL;
	node = NULL;
	if (mode == 1)
	{
		data = malloc(size);
		if (!data)
			err(25);
		node = malloc(sizeof(t_collect));
		if (!node)
			(free(data), err(25));
		node->data = data;
		node->next = head;
		head = node;
	}
	else if (mode == 0)
	{
		free_all(&head);
		head = NULL;
	}
	return (data);
}
