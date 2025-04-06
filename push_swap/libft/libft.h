/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achnouri <achnouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:54:59 by achnouri          #+#    #+#             */
/*   Updated: 2025/03/24 07:44:28 by achnouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct stack
{
	int				content;
	int				index;
	struct stack	*next;
}	t_stack;

typedef struct garbage_c
{
	void				*data;
	struct garbage_c	*next;
}	t_collect;

long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
int		ft_isdigit(int n);

t_stack	*ft_lstnew(int content);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	*ft_malloc(size_t size, int mode);

#endif