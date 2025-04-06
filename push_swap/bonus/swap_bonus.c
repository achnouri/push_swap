/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:53:06 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:18:05 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
	swap(a);
}

void	sb(t_stack **b)
{
	swap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}
