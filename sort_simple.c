/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:23:17 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/13 00:08:55 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	sort_two(t_res *res)
{
	if (res->a[0] < res->a[1])
		sa(res->a, 2);
}

void	sort_three(int *a)
{
	if (a[0] > a[1] && a[1] > a[2])
		return ;
	else if (a[0] > a[2] && a[2] > a[1])
		sa(a, 3);
	else if (a[1] > a[2] && a[2] > a[0])
		rra(a, 3);
	else if (a[1] > a[0] && a[0] > a[2])
	{
		rra(a, 3);
		sa(a, 3);
	}
	else if (a[2] > a[0] && a[0] > a[1])
		ra(a, 3);
	else if (a[2] > a[1] && a[1] > a[0])
	{
		ra(a, 3);
		sa(a, 3);
	}
}

void	sort_four(t_res *r)
{
	int min;

	min = r->r[0];
	while (r->a_size > 3)
	{
		if (r->a[r->a_size - 1] > r->r[0])
			ra(r->a, r->a_size);
		else
			pb(r);
	}
	sort_three(r->a);
	b_to_a(r);
}

void	sort_five(t_res *r)
{
	int	tmp;

	tmp = r->r[1];
	while (r->a_size > 3)
	{
		if (r->a[r->a_size - 1] > tmp)
			ra(r->a, r->a_size);
		else
			pb(r);
	}
	sort_three(r->a);
	b_to_a(r);
}

void	sort_simple(t_res *res)
{
	if (res->a_size == 2)
		sort_two(res);
	else if (res->a_size == 3)
		sort_three(res->a);
	else if (res->a_size == 4)
		sort_four(res);
	else
		sort_five(res);
}