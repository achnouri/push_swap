/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:54:08 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/21 20:54:10 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../push_swap.h"

static int	counter(const char *s, char n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == n)
			i++;
		if (s[i])
			count++;
		while (s[i] != n && s[i])
			i++;
	}
	return (count);
}

static char	*ft_strndup(const char *str, char n)
{
	int		len;
	int		i;
	char	*s;

	len = 0;
	i = 0;
	if (!str)
		return (NULL);
	while (str[len] != n && str[len])
		len++;
	s = ft_malloc(len + 1, 1);
	if (s == NULL)
		err(25);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static char	**loop(const char *s, char **array, int c)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		if (s[j] != '\0')
		{
			tmp = ft_strndup(s + j, c);
			if (!tmp)
				err(25);
			else
				array[i++] = tmp;
		}
		while (s[j] != c && s[j])
			j++;
	}
	return (array[i] = NULL, array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)ft_malloc(sizeof(char *) * (counter(s, c) + 1), 1);
	if (!array)
		err(25);
	return (loop(s, array, c));
}
