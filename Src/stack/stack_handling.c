/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchabeau <cchabeau@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:20:23 by cchabeau          #+#    #+#             */
/*   Updated: 2023/04/05 16:37:40 by cchabeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Include/push_swap.h"

t_structure	*push_stack(int nbr, t_structure *structure)
{
	t_stack	*new;

	new = init_stack(nbr);
	if (!new)
		return (NULL);
	if (!structure->head)
	{
		structure->head = new;
		structure->tail = new;
	}
	else
	{
		new->next = structure->head;
		structure->head = new;
	}
	return (structure);
}

t_structure	*pop_stack(t_structure *structure)
{
	t_stack	*tmp;

	tmp = structure->head;
	structure->head = structure->head->next;
	free(tmp);
	return (structure);
}
