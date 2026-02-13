/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:35:34 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/10 22:17:43 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_pos(t_elem *a, int size, int target)
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

	pos = find_pos(s -> a, s -> size_a, target);
	if (pos < 0)
		error_exit();
	while (s -> a[0].index != target)
	{
		if (pos <= s -> size_a/2)
			ra();
		else
			rra();
		pos = find_pos(s -> a, s -> size_a, target);
	}
}
