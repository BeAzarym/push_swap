/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:20:19 by cchabeau          #+#    #+#             */
/*   Updated: 2023/03/15 16:18:14 by cchabeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/push_swap.h"

int	ft_isnumeric(char *str)
{
	while (*str)
	{
		if ((*str >= 48 && *str <= 57) || *str == 45)
			str++;
		else
			return (0);
	}
	return (1);
}
