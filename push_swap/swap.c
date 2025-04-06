/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:51:48 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:19:52 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **ab)
{
	int	tmp;

	if (!(*ab) || !(*ab)->next)
		return ;
	tmp = (*ab)->content;
	(*ab)->content = (*ab)->next->content;
	(*ab)->next->content = tmp;
	tmp = (*ab)->index;
	(*ab)->index = (*ab)->next->index;
	(*ab)->next->index = tmp;
}

void	sa(t_stack **a)
{
	write (1, "sa\n", 3);
	swap(a);
}

void	sb(t_stack **b)
{
	write (1, "sb\n", 3);
	swap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	write (1, "ss\n", 3);
	swap(a);
	swap(b);
}
