/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:18:45 by achnouri          #+#    #+#             */
/*   Updated: 2025/04/06 03:10:09 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s_three(t_stack **stack_a)
{
	int	mx;

	mx = max_index(*stack_a);
	if ((*stack_a)->index == mx)
		ra(stack_a);
	else if ((*stack_a)->next->index == mx)
		rra(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	av = check_args(ac, av);
	if (is_sorted(av))
	{
		ft_malloc(0, 0);
		return (0);
	}
	stack_a = add_args_to_stack_a(av, &stack_a);
	get_index(&stack_a);
	sorting(&stack_a, &stack_b);
	ft_malloc(0, 0);
	return (0);
}
