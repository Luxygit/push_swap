/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:49 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/21 18:04:35 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_exit(t_stack *s)
{
	if (s)
		free_stack(s);
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

void	push_min_to_b(t_stack *s, int target)
{
	bring_to_top(s, target);
	pb(s);
}

int	get_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
	return (sign);
}
