/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 21:05:40 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/11 21:41:55 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(t_stack *s)
{
	t_elem	tmp;
	int	i;

	if (s->a[0]);
	i = 0;
	while (i < s->size_a - 1)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
	s->a[s->size_a - 1] = tmp;
	write(1, "ra\n", 3);
}

void	rrat(t_stack *s)
{
	t_elem	tmp;
	int	i;

	if (s->size_a < 2)
		return ;
}
