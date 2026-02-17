/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:44:30 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/16 20:44:02 by dievarga         ###   ########.fr       */
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
}	t_stack;

void	parse_input(t_stack *s, int argc, char **argv);
int		is_sorted(t_stack *s);
int		in_chunk(int index, int min, int max);
int		find_pos(t_elem *a, int size, int target);
void	error_exit(void);
void	bring_to_top(t_stack *s, int target);
void	sort_small(t_stack *s);
void	sort_2(t_stack *s);
void	sort_3(t_stack *s);
void	sort_4(t_stack *s);
void	sort_5(t_stack *s);
void	fill_stacks(t_stack *s, char **numbers);
void	free_split(char **split);
void	free_stack(t_stack *s);
int		count_strings(char **arr);
void	check_duplicates(t_stack *s);
void	push_min_to_b(t_stack *s, int target);
void	assign_indexes(t_stack *s);
void	ra(t_stack *s);
void	rra(t_stack *s);
void	rb(t_stack *s);
void	rrb(t_stack *s);
void	pb(t_stack *s);
void	pa(t_stack *s);
void	rb(t_stack *s);
void	sa(t_stack *s);
void	sb(t_stack *s);
void	handle_push(t_stack *s, int *pushed, int max, int chunk);
int		get_chunk_count(int size);
void	sort_large(t_stack *s);

#endif
