/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:49 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/16 08:37:07 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	is_sorted(t_stack *s)
{
	int	i;

	i = 0;
	while (i < s->size_a - 1)
	{
		if (s->a[i].index > s->a[i + 1].index)
			return (0);
		i++;
	}
	return (1);
}

int	in_chunk(int index, int min, int max)
{
	return (index >= min && index <= max);
}

void	check_duplicates(t_stack *s)
{
	int	i;
	int	j;

	i = 0;
	while (i < s->size_a)
	{
		j = i + 1;
		while (j < s->size_a)
		{
			if (s->a[i].value == s->a[j].value)
				error_exit();
			j++;
		}
		i++;
	}
}
