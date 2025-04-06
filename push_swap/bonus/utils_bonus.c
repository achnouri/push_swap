/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:53:13 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:18:10 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*add_args_to_a(char **lst, t_stack **stack_a)
{
	int		j;
	t_stack	*tmp;

	j = 0;
	while (lst[j])
	{
		tmp = ft_lstnew(ft_atoi(lst[j]));
		tmp->index = 0;
		ft_lstadd_back(stack_a, tmp);
		j++;
	}
	return ((*stack_a));
}
