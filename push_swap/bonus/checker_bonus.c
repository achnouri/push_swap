/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:52:26 by achnouri          #+#    #+#             */
/*   Updated: 2025/04/06 10:36:24 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	err(int i)
{
	if (i == 25)
		ft_malloc(0, 0);
	write(2, "Error\n", 6);
	exit(1);
}

void	save_op(t_move **move, char *op)
{
	t_move	*add;
	t_move	*tmp;

	add = ft_malloc (sizeof(t_move), 1);
	if (!add)
		err(25);
	add->mv = op;
	add->next = NULL;
	tmp = *move;
	if (!(*move))
		*move = add;
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = add;
	}
}

void	check_move(char *move)
{
	if (ft_strcmp(move, "sa\n"))
		return ;
	else if (ft_strcmp(move, "sb\n"))
		return ;
	else if (ft_strcmp(move, "ss\n"))
		return ;
	else if (ft_strcmp(move, "pa\n"))
		return ;
	else if (ft_strcmp(move, "pb\n"))
		return ;
	else if (ft_strcmp(move, "ra\n"))
		return ;
	else if (ft_strcmp(move, "rb\n"))
		return ;
	else if (ft_strcmp(move, "rr\n"))
		return ;
	else if (ft_strcmp(move, "rra\n"))
		return ;
	else if (ft_strcmp(move, "rrb\n"))
		return ;
	else if (ft_strcmp(move, "rrr\n"))
		return ;
	err(25);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_move	*move;
	char	*line;

	move = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (ac <= 1)
		return (0);
	av = check_av(ac, av);
	stack_a = add_args_to_a(av, &stack_a);
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		check_move(line);
		save_op(&move, line);
	}
	take_moves(&stack_a, &stack_b, move);
	ft_malloc (0, 0);
}
