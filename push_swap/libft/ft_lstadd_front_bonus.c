/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:53:36 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/21 20:53:39 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
