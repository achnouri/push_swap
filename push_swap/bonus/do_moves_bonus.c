/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_moves_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:52:37 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/24 09:23:33 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

void	take_moves(t_stack **stack_a, t_stack **stack_b, t_move *mv)
{
	while (mv)
	{
		do_move(stack_a, stack_b, mv->mv);
		mv = mv->next;
	}
	if (is_sorted(*stack_a) && ft_lstsize(*stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

void	do_move(t_stack **a, t_stack **b, char *move)
{
	if (ft_strcmp(move, "sa\n"))
		sa(a);
	else if (ft_strcmp(move, "sb\n"))
		sb(b);
	else if (ft_strcmp(move, "ss\n"))
		ss(a, b);
	else if (ft_strcmp(move, "pa\n"))
		pa(a, b);
	else if (ft_strcmp(move, "pb\n"))
		pb(a, b);
	else if (ft_strcmp(move, "ra\n"))
		ra(a);
	else if (ft_strcmp(move, "rb\n"))
		rb(b);
	else if (ft_strcmp(move, "rr\n"))
		rr(a, b);
	else if (ft_strcmp(move, "rra\n"))
		rra(a);
	else if (ft_strcmp(move, "rrb\n"))
		rrb(b);
	else if (ft_strcmp(move, "rrr\n"))
		rrr(a, b);
	else
		err(25);
}
