/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:54:20 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/21 20:54:21 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	int		i;

	i = ft_strlen(src);
	p = ft_malloc(i + 1, 1);
	if (p == NULL)
		err(25);
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
