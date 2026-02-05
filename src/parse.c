/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:51:35 by dievarga          #+#    #+#             */
/*   Updated: 2026/02/04 19:21:42 by dievarga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	char	*join_args(int argc, char **argv)
{
	char	*res;
	int		i;

	i = 1;
	res = ft_strdup("");
	while (i < argc)
	{
		res = ft_strjoin(res, argv[i]);
		res = ft_strjoin(res, " ");
		i++;
	}
	return (res);
}

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

void	parse_input(int argc, char **argv, t_elem **a, int *size)
{
	char	*joined;
	char	**tokens;
	int		i;

	joined = join_args(argc, argv);
	tokens = ft_split(joined, ' ');
	free(joined);
	i = 0;
	while (tokens[i])
		i++;
	*size = i;
	*a = malloc(sizeof(t_elem) * (*size));
	if (!(*a))
		error_exit();
	i = 0;
	while (i < *size)
	{
		(*a)[i].value = (int)ft_atol_safe(tokens[i]);
		(*a)[i].index = -1;
		free(tokens[i]);
		i++;
	}
	free(tokens);
}
