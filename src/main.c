/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:28 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/19 17:44:36 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	s;

	if (argc < 2)
		return (0);
	s.a = NULL;
	s.b = NULL;
	s.size_a = 0;
	s.size_b = 0;
	parse_input(&s, argc, argv);
	assign_indexes(&s);
	if (!is_sorted(&s))
	{
		if (s.size_a <= 5)
			sort_small(&s);
		else
			sort_large(&s);
	}
	free_stack(&s);
	return (0);
}
