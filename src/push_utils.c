/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 21:58:43 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/15 16:57:48 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_min_to_b(t_stack *s, int target)
{
	bring_to_top(s, target);
	pb(s);
}

void	push_chunk_to_b(t_stack *s, int min, int max)
{
	int	pushed;

	pushed = 0;
	while (pushed < (max - min + 1))
	{
		if (in_chunk(s -> a[0].index, min, max))
		{
			pb(s);
			pushed++;
		}
		else
			ra(s);
	}
}
