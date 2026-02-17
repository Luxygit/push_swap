/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:21:36 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/16 08:40:42 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	void	sort_int_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (arr[j] > arr [j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*copy_values(t_elem *a, int size)
{
	int	*tmp;
	int	i;

	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		error_exit();
	i = 0;
	while (i < size)
	{
		tmp[i] = a[i].value;
		i++;
	}
	return (tmp);
}

int	find_index(int *arr, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	assign_indexes(t_stack *s)
{
	int	i;
	int	*sorted;

	sorted = copy_values(s->a, s->size_a);
	sort_int_array(sorted, s->size_a);
	i = 0;
	while (i < s->size_a)
	{
		s->a[i].index = find_index(sorted, s->size_a, s->a[i].value);
		i++;
	}
	free(sorted);
}
