/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 23:03:46 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/13 00:11:12 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_res *r)
{
	int	chk_max;
	int	chk_min;

	while(r->a_size)
	{
		if (r->chk + r->num >= r->total)
			chk_max = r->r[r->total - 1];
		else
			chk_max = r->r[r->chk + r->num];
		chk_min = r->r[r->num];
		if (r->a[r->a_size - 1] < chk_min)
		{
			pb(r);
			r->num++;
		}
		else if (r->a[r->a_size - 1] <= chk_max)
		{
			pb(r);
			rb(r->b, r->b_size);
			r->num++;
		}
		else
			ra(r->a, r->a_size);
	}
}

void	set_chunk(t_res *res)
{
	if (res->a_size <= 10)
		res->chk = 2;
	else if (res->a_size <= 50)
		res->chk = 5;
	else if (res->a_size <= 100)
		res->chk = 15;
	else if (res->a_size <= 500)
		res->chk = 30;
	else
		res->chk = 50;
}

void	sort_complex(t_res *res)
{
	set_chunk(res);
	a_to_b(res);
	b_to_a(res);
}