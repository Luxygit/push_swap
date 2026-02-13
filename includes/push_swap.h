/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:44:30 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/11 21:42:03 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef	struct	s_stack
{
	t_elem	*a;
	t_elem	*b;
	int	size_a;
	int	size_b;
}	t_stack;

typedef struct	s_elem
{
	int	value;
	int	index;
}	t_elem;

void	parse_input(int argc, char **argv, t_elem **a, int *size);
int		is_sorted(t_elem *a, int size);
int		find_pos(t_elem *a, int size, int target);
void	error_exit(void);
void	bring_to_top(t_stack *s, int target);
void	sort_2(t_stack *s);
void	sort_3(t_elem *a);
void	sort_5(t_stack *s);
void	push_min_to_b(t_stack *s, int target);
void	assign_indexes(t_elem *a, int size);
void	ra(t_stack *s);
void	rra(t_stack *s);
void	pb(t_stack *s);
void	pa(t_stack *s);
void	rb(t_stack *s);
void	sa(t_stack *s);
void	sb(t_stack *s);

#endif
