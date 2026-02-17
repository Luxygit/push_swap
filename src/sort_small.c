/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:28:09 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/15 21:32:31 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small(t_stack *s)
{
	if (s->size_a == 2)
		sort_2(s);
	else if (s->size_a == 3)
		sort_3(s);
	else if (s->size_a == 4)
		sort_4(s);
	else if (s->size_a == 5)
		sort_5(s);
}

void	sort_2(t_stack *s)
{
	if (s->a[0].index > s->a[1].index)
		sa(s);
}

void	sort_3(t_stack *s)
{
	int	x;
	int	y;
	int	z;

	x = s->a[0].index;
	y = s->a[1].index;
	z = s->a[2].index;
	if (x < y && y < z)
		return ;
	if (x > y && x > z)
		ra(s);
	else if (y > x && y > z)
		rra(s);
	if (s->a[0].index > s->a[1].index)
		sa(s);
}

void	sort_4(t_stack *s)
{
	push_min_to_b(s, 0);
	sort_3(s);
	pa(s);
}

void	sort_5(t_stack *s)
{
	push_min_to_b(s, 0);
	push_min_to_b(s, 1);
	sort_3(s);
	pa(s);
	pa(s);
}
