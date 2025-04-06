/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:52:21 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/23 22:17:24 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

bool	is_sorted(t_stack *lst)
{
	t_stack	*tmp;

	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (tmp->content < lst->content)
				return (false);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (true);
}

void	duplicate_arg_check(char **lst)
{
	int	i;
	int	j;

	i = 0;
	if (!lst || !lst[0])
		err(25);
	if (ft_atoi(lst[0]) > INT_MAX || ft_atoi(lst[0]) < INT_MIN)
		return (err(25));
	while (lst[i])
	{
		j = i + 1;
		while (lst[j])
		{
			if (ft_atoi(lst[j]) > INT_MAX || ft_atoi(lst[j]) < INT_MIN)
				err(25);
			if (ft_atoi(lst[i]) == ft_atoi(lst[j]))
				err(25);
			j++;
		}
		i++;
	}
}

void	empty_arg_check(char **av)
{
	int	i;
	int	k;
	int	check;

	i = 1;
	if (!av || !av[0])
		return (err(25));
	while (av[i])
	{
		k = 0;
		check = 0;
		while (av[i][k])
		{
			if (ft_isdigit(av[i][k]))
				check = 42;
			k++;
		}
		if (check == 0 || av[i][0] == '\0')
			err(25);
		i++;
	}
}

void	only_digit(char **lst)
{
	int	i;
	int	j;

	i = 0;
	while (lst[i])
	{
		j = 0;
		if ((lst[i][j] == '-' || lst[i][j] == '+') && lst[i][j + 1] == '\0')
			err(25);
		if ((lst[i][j] == '-' || lst[i][j] == '+') && lst[i][j + 1])
			j++;
		while (lst[i][j])
		{
			if (!ft_isdigit(lst[i][j]))
				err(25);
			j++;
		}
		i++;
	}
}

char	**check_av(int ac, char **av)
{
	int		i;
	char	*arg;
	char	**list;

	list = NULL;
	arg = NULL;
	i = 1;
	while (i < ac)
	{
		arg = ft_strjoin(arg, av[i++]);
		arg = ft_strjoin(arg, " ");
	}
	list = ft_split(arg, ' ');
	if (!list)
		err(25);
	empty_arg_check(av);
	duplicate_arg_check(list);
	only_digit(list);
	return (list);
}
