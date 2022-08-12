/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 00:09:27 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/13 00:16:17 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(t_res *res)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < res->a_size)
	{
		j = 0;
		while (j < i)
		{
			if (res->r[i] < res->r[j])
			{
				tmp = res->r[i];
				res->r[i] = res->r[j];
				res->r[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	is_sorted(t_res *res)
{
	int	i;

	i = 0;
	while (i < res->a_size)
	{
		if (res->a[i] != res->r[res->a_size - i - 1])
			return;
		i++;
	}
	p_error(0);
}