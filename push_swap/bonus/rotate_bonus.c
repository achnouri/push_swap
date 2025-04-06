/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:53:00 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:18:00 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rotate(t_stack **ab)
{
	t_stack	*tmp;

	if (ft_lstsize(*ab) <= 1)
		return ;
	tmp = (*ab);
	(*ab) = (*ab)->next;
	tmp->next = NULL;
	ft_lstadd_back(ab, tmp);
}

void	ra(t_stack **a)
{
	rotate(a);
}

void	rb(t_stack **b)
{
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
