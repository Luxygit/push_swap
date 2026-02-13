/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:28:09 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/11 17:03:26 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	sort_2(t_stack *s)
{

}
*/

void	sort_3(t_elem *a)
{
	int	x;
	int	y;
	int	z;

	x = a[0].index;
	y = a[1].index;
	z = a[2].index;
	if (x < y && y < z)
		return ;
	if (x > y && x > z)
		ra();
	else if (y > x && y > z)
		rra();
	if (a[0].index > a[1].index)
		sa();
}

void	sort_5(t_stack *s)
{
	push_min_to_b(s, 0);
	push_min_to_b(s, 1);
	sort_3(s -> a);
	pa();
	pa();
}
