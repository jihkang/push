/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ir_b.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:22:02 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/12 23:29:40 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	pb(t_res *r)
{
	if (r->a_size < 1)
		return ;
	write(1, "pb\n", 3);
	r->b[r->b_size] = r->a[r->a_size - 1];
	r->a_size--;
	r->b_size++;
}

void	rb(int *a, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	write(1, "rb\n", 3);
	i = size - 1;
	tmp = a[i];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = tmp;
}

void	rrb(int *a, int size)
{
	int	i;
	int	tmp;

	if (size < 2)
		return ;
	write(1, "rrb\n", 4);
	i = 0;
	tmp = a[i];
	while (i < size - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = tmp;
}

void	sb(int	*a, int size)
{
	int	tmp;

	if (size < 2)
		return ;
	write(1, "sb\n", 3);
	tmp = a[size - 1];
	a[size - 1] = a[size - 2];
	a[size - 2] = tmp;
}
