/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:52:54 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:17:56 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*befor_last(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void	reverse(t_stack **ab)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack	*befor_lst;

	if (!(*ab) || !ft_lstlast(*ab))
		return ;
	last = ft_lstlast(*ab);
	befor_lst = befor_last(*ab);
	tmp = (*ab);
	(*ab) = last;
	(*ab)->next = tmp;
	befor_lst->next = NULL;
}

void	rra(t_stack **a)
{
	reverse(a);
}

void	rrb(t_stack **b)
{
	reverse(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
}
