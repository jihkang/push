/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ir_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:21:21 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/12 23:29:50 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	pa(t_res *r)
{
	if (r->b_size < 1)
		return ;
	write(1, "pa\n", 3);
	r->a[r->a_size] = r->b[r->b_size - 1];
	r->a_size++;
	r->b_size--;
}

void	ra(int	*a, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	write(1, "ra\n", 3);
	i = size - 1;
	tmp = a[i];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = tmp;
}

void	rra(int *a, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	write(1, "rra\n", 4);
	i = 0;
	tmp = a[i];
	while (i < size - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = tmp;
}

void	sa(int	*a, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	write(1, "sa\n", 3);
	tmp = a[size - 1];
	a[size - 1] = a[size - 2];
	a[size - 2] = tmp;
}
