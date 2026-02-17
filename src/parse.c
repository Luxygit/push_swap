/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:35 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/16 20:32:59 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	long	ft_atol_safe(char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!str[i])
		error_exit();
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error_exit();
		res = res * 10 + (str[i] - '0');
		if ((sign == 1 && res > INT_MAX) || (sign == -1 && - res < INT_MIN))
			error_exit();
		i++;
	}
	return (res * sign);
}

void	parse_input(t_stack *s, int argc, char **argv)
{
	char	**numbers;

	if (argc == 2)
		numbers = ft_split(argv[1], ' ');
	else
		numbers = argv + 1;
	fill_stacks(s, numbers);
	if (argc == 2)
		free_split(numbers);
}

void	fill_stacks(t_stack *s, char **numbers)
{
	int	i;
	int	count;

	count = count_strings(numbers);
	s->size_a = count;
	s->size_b = 0;
	s->a = malloc(sizeof(t_elem) * count);
	s->b = malloc(sizeof(t_elem) * count);
	if (!s->a || !s->b)
		error_exit();
	i = 0;
	while (i < count)
	{
		s->a[i].value = ft_atol_safe(numbers[i]);
		i++;
	}
	check_duplicates(s);
}

void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
