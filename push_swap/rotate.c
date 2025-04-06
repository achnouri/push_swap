/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:51:37 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:19:35 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write (1, "ra\n", 3);
	rotate(a);
}

void	rb(t_stack **b)
{
	write (1, "rb\n", 3);
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	write (1, "rr\n", 3);
	rotate(a);
	rotate(b);
}
