/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 17:00:45 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/21 17:56:08 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	find_max_pos(t_stack *s)
{
	int		max;
	int		pos;
	int		i;

	if (s->size_b == 0)
		return (-1);
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
		if (pos < 0)
			return ;
		if (pos <= s->size_b / 2)
		{
			while (pos-- > 0)
				rb(s);
		}
		else
		{
			pos = s->size_b - pos;
			while (pos-- > 0)
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
	max = chunk + (size % get_chunk_count(size));
	pushed = 0;
	while (s->size_a > 0)
	{
		if (s->a[0].index < max)
		{
			handle_push(s, &pushed, max, chunk);
			if (pushed >= chunk && max < size)
			{
				max += chunk;
				if (max > size)
					max = size;
				pushed = 0;
			}
		}
		else
			ra(s);
	}
}
