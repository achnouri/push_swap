/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:52:49 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/24 09:13:20 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	push(t_stack **to, t_stack **from)
{
	t_stack	*tmp;

	if (!(*from) || !from)
		return ;
	tmp = *from;
	(*from) = (*from)->next;
	tmp->next = NULL;
	ft_lstadd_front(to, tmp);
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
}
