/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:00:45 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/16 20:37:16 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_max_pos(t_stack *s)
{
	int		max;
	int		pos;
	int		i;

	if (s->size_b == 0)
		return (0);
	max = s->b[0].index;
	pos = 0;
	i = 1;
	while (i < s->size_b)
	{
		if (s->b[i].index > max)
		{
			max = s->b[i].index;
			pos = i;
		}
		i++;
	}
	return (pos);
}

void	push_back_to_a(t_stack *s)
{
	int	pos;

	while (s->size_b > 0)
	{
		pos = find_max_pos(s);
		if (pos <= s->size_b / 2)
		{
			while (pos-- > 0)
				rb(s);
		}
		else
		{
			while (pos++ < s->size_b)
				rrb(s);
		}
		pa(s);
	}
}

void	push_chunks_to_b(t_stack *s)
{
	int	size;
	int	chunk;
	int	max;
	int	pushed;

	size = s->size_a;
	chunk = size / get_chunk_count(size);
	max = chunk;
	pushed = 0;
	while (s->size_a > 0)
	{
		if (s->a[0].index < max)
			handle_push(s, &pushed, max, chunk);
		else
			ra(s);
		if (pushed == chunk)
		{
			max += chunk;
			pushed = 0;
		}
	}
}

void	sort_large(t_stack *s)
{
	push_chunks_to_b(s);
	push_back_to_a(s);
}
