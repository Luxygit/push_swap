/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 17:27:16 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/15 18:00:56 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_stack *s)
{
	t_elem	tmp;
	int		i;

	if (s->size_a == 0)
		return ;
	tmp = s->a[0];
	i = 0;
	while (i < s->size_a -1)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
	s->size_a--;
	i = s->size_b;
	while (i > 0)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[0] = tmp;
	s->size_b++;
	write(1, "pb\n", 3);
}

void	pa(t_stack *s)
{
	t_elem	tmp;
	int		i;

	if (s->size_b == 0)
		return ;
	tmp = s->b[0];
	i = 0;
	while (i < s->size_b -1)
	{
		s->b[i] = s->b[i + 1];
		i++;
	}
	s->size_b--;
	i = s->size_a;
	while (i > 0)
	{
		s->a[i] = s->a[i - 1];
		i--;
	}
	s->a[0] = tmp;
	s->size_a++;
	write(1, "pa\n", 3);
}
