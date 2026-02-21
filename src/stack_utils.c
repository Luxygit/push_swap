/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:35:34 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/21 18:48:28 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	find_pos(t_elem *a, int size, int target)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (a[i].index == target)
			return (i);
		i++;
	}
	return (-1);
}

void	bring_to_top(t_stack *s, int target)
{
	int	pos;

	pos = find_pos(s->a, s->size_a, target);
	if (pos < 0)
		error_exit(s);
	while (s -> a[0].index != target)
	{
		if (pos <= s->size_a / 2)
		{
			ra(s);
			pos--;
		}
		else
		{
			rra(s);
			pos++;
		}
	}
}

void	free_stack(t_stack *s)
{
	int	i;

	if (s->numbers)
	{
		i = 0;
		while (s->numbers[i])
		{
			free(s->numbers[i]);
			i++;
		}
		free(s->numbers);
		s->numbers = NULL;
	}
	free(s->a);
	free(s->b);
}
