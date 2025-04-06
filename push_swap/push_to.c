/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:51:21 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:19:25 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **to, t_stack **from)
{
	t_stack	*tmp;

	if (from == NULL)
		return ;
	tmp = *from;
	(*from) = (*from)->next;
	tmp->next = NULL;
	ft_lstadd_front(to, tmp);
}

void	pa(t_stack **a, t_stack **b)
{
	write(1, "pa\n", 3);
	push(a, b);
}

void	pb(t_stack **a, t_stack **b)
{
	write(1, "pb\n", 3);
	push(b, a);
}
