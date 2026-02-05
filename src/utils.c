/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:49 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/04 17:17:50 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	is_sorted(t_elem *a, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (a[i].value > a[i + 1].value)
			return (0);
		i++;
	}
	return (1);
}
