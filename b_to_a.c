/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:59:51 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/13 00:02:30 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_index(int *r, int value, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (r[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	b_to_a(t_res *r)
{
	int	next;
	
	if (r->b_size < 1)
		return ;
	while (r->b_size)
	{
		next = get_index(r->b, r->r[r->b_size - 1], r->b_size);
		if (next == -1)
			return ;
		if (next < r->b_size / 2)
			while (next-- >= 0)
				rrb(r->b, r->b_size);
		else
			while (next++ != r->b_size - 1)
				rb(r->b, r->b_size);
		pa(r);
	}	
}
