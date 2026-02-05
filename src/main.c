/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:28 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/04 17:19:20 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_elem	*a;
	int		size;

	a = NULL;
	size = 0;
	if (argc < 2)
		return (0);
	parse_input(argc, argv, &a, &size);
	if (is_sorted(a, size))
	{
		free(a);
		return (0);
	}
	free(0);
	return (0);
}
