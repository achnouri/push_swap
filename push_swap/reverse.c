/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:51:28 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:19:29 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

	if (!*ab || !ft_lstlast(*ab))
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
	write (1, "rra\n", 4);
	reverse(a);
}

void	rrb(t_stack **b)
{
	write (1, "rrb\n", 4);
	reverse(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	write (1, "rrr\n", 4);
	reverse(a);
	reverse(b);
}
