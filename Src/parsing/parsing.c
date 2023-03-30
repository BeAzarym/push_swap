/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:26:44 by cchabeau          #+#    #+#             */
/*   Updated: 2023/03/30 13:36:24 by cchabeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Include/push_swap.h"

int	is_double(int nbr, t_stack *stack)
{
	while (stack)
	{
		if (stack->content == nbr)
			return (1);
		else
			stack = stack->next;
	}
	return (0);
}

int	is_validArg(int len, char **array)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (ft_isnumeric(array[i]))
			i++;
		else
			return (0);
	}
	return (1);	
}

char	**ft_get_arg(int argc, char **argv)
{
	int		i;
	char	**array;

	i = 0;
	if (argc == 2)
		array = ft_split(argv[1], ' ');
	else
	{
		array = malloc(sizeof(char *) * argc);
		if (!array)
			return (NULL);
		while (++i < argc)
			array[i - 1] = ft_strdup(argv[i]);
	}
	if (!is_validArg(ft_tablen(array), array))
		ft_error(array, ARRAY);
	return (array);
}
