/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 20:10:05 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/16 22:47:58 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_chunk_count(int size)
{
	if (size <= 100)
		return (5);
	return (9);
}

void	handle_push(t_stack *s, int *pushed, int max, int chunk)
{
	pb(s);
	(*pushed)++;
	if (s->b[0].index < max - (chunk / 2))
		rb(s);
}
