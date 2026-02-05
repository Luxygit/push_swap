/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:44:30 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/03 13:51:05 by dievarga         ###   ########.fr       */
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

void	parse_input(int argc, char **argv, t_elem **a, int *size);
int		is_sorted(t_elem *a, int size);
void	error_exit(void);

#endif
