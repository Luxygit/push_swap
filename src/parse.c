/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:35 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/21 18:51:03 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	long	ft_atol(char *str, t_stack *s)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	i = 0;
	sign = get_sign(str, &i);
	if (!str[i])
		error_exit(s);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error_exit(s);
		res = res * 10 + (str[i] - '0');
		if (res > 2147483648L)
			error_exit(s);
		i++;
	}
	if ((sign == 1 && res > 2147483647L) || (sign == -1 && res > 2147483648L))
		error_exit(s);
	return (res * sign);
}

static void	check_duplicates(t_stack *s)
{
	int	i;
	int	j;

	i = 0;
	while (i < s->size_a)
	{
		j = i + 1;
		while (j < s->size_a)
		{
			if (s->a[i].value == s->a[j].value)
				error_exit(s);
			j++;
		}
		i++;
	}
}

static void	fill_stacks(t_stack *s, char **numbers)
{
	int	i;
	int	count;

	i = 0;
	while (numbers[i])
		i++;
	count = i;
	if (count == 0)
		error_exit(s);
	s->size_a = count;
	s->size_b = 0;
	s->a = malloc(sizeof(t_elem) * count);
	s->b = malloc(sizeof(t_elem) * count);
	if (!s->a || !s->b)
		error_exit(s);
	i = 0;
	while (i < count)
	{
		s->a[i].value = ft_atol(numbers[i], s);
		i++;
	}
	check_duplicates(s);
}

void	parse_input(t_stack *s, int argc, char **argv)
{
	char	**numbers;
	int		i;

	s->numbers = NULL;
	if (argc == 2)
		numbers = ft_split(argv[1], ' ');
	else
		numbers = argv + 1;
	if (argc == 2 && !numbers)
		error_exit(s);
	if (argc == 2)
		s->numbers = numbers;
	fill_stacks(s, numbers);
	if (argc == 2)
	{
		s->numbers = NULL;
		i = 0;
		while (numbers[i])
			free(numbers[i++]);
		free(numbers);
	}
}
