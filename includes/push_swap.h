/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:44:30 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/21 20:59:34 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_elem
{
	int	value;
	int	index;
}	t_elem;

typedef struct s_stack
{
	t_elem	*a;
	t_elem	*b;
	int		size_a;
	int		size_b;
	char	**numbers;
}	t_stack;

int		is_sorted(t_stack *s);
int		get_chunk_count(int size);
int		get_sign(char *str, int *i);
char	**merge_args(t_stack *s, int argc, char **argv);
void	parse_input(t_stack *s, int argc, char **argv);
void	error_exit(t_stack *s);
void	bring_to_top(t_stack *s, int target);
void	sort_small(t_stack *s);
void	free_stack(t_stack *s);
void	push_min_to_b(t_stack *s, int target);
void	push_chunks_to_b(t_stack *s);
void	push_back_to_a(t_stack *s);
void	assign_indexes(t_stack *s);
void	ra(t_stack *s);
void	rra(t_stack *s);
void	rb(t_stack *s);
void	rrb(t_stack *s);
void	pb(t_stack *s);
void	pa(t_stack *s);
void	sa(t_stack *s);
void	handle_push(t_stack *s, int *pushed, int max, int chunk);

#endif
