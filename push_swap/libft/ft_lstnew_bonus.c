/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:53:47 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/21 20:53:49 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*p;

	p = ft_malloc(sizeof(t_stack), 1);
	if (!p)
		err(25);
	p->content = content;
	p->next = NULL;
	return (p);
}
