/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 20:33:34 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/21 21:21:02 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	int	count_tokens(t_stack *s, int argc, char **argv)
{
	char	**split;
	int		total;
	int		i;
	int		j;

	total = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i++], ' ');
		if (!split)
			error_exit(s);
		j = 0;
		while (split[j])
			free(split[j++]);
		free(split);
		total += j;
	}
	return (total);
}

static	void	fill_all(char **all, t_stack *s, int argc, char **argv)
{
	char	**split;
	int		i;
	int		j;

	all[0] = NULL;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i++], ' ');
		if (!split)
			error_exit(s);
		j = 0;
		while (split[j])
		{
			*all++ = split[j++];
			*all = NULL;
		}
		free(split);
	}
	*all = NULL;
}

char	**merge_args(t_stack *s, int argc, char **argv)
{
	char	**all;
	int		total;

	total = count_tokens(s, argc, argv);
	all = malloc(sizeof(char *) * (total + 1));
	if (!all)
		error_exit(s);
	fill_all(all, s, argc, argv);
	return (all);
}

int	get_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
	return (sign);
}
