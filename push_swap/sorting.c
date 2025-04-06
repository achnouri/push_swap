/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 21:29:08 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/24 08:45:53 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_ff(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = ft_lstsize(*stack_a);
	while (i > 0 && ft_lstsize(*stack_b) < 2)
	{
		if ((*stack_a)->index <= 1)
			pb(stack_a, stack_b);
		else
			ra(stack_a);
		i--;
	}
	if (ft_lstsize(*stack_a) == 3)
		s_three(stack_a);
	else if ((*stack_a)->index > (*stack_a)->next->index)
		sa(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	big_sort(t_stack **stack_a, t_stack **stack_b, int range)
{
	int	i;

	i = 0;
	while (ft_lstsize(*stack_a) > 0)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			++i;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			++i;
		}
		else
			ra(stack_a);
	}
}

void	final_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	idx;

	idx = max_index(*stack_b);
	while (ft_lstsize(*stack_b) > 0)
	{
		if ((*stack_b)->index == idx)
		{
			pa(stack_a, stack_b);
			idx--;
		}
		else if ((*stack_b)->next->index == idx)
		{
			sb(stack_b);
			pa(stack_a, stack_b);
			idx--;
		}
		else
		{
			if (!best_move(*stack_b, idx))
				rrb(stack_b);
			else
				rb(stack_b);
		}
	}
}

void	sorting(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		s_three(stack_a);
	else if (ft_lstsize(*stack_a) <= 5)
		s_ff(stack_a, stack_b);
	else
	{
		if (ft_lstsize(*stack_a) <= 100)
			big_sort(stack_a, stack_b, 13);
		else
			big_sort(stack_a, stack_b, 39);
		final_sort(stack_a, stack_b);
	}
}
