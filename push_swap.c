/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 20:38:36 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/13 00:14:28 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

void	p_error(int type)
{
	if (type == 1)
		write(1, "Error\n", 6);
	else if (type == 0)
		exit(1);
	exit(0);
}

void	av_to_res(t_res *res, int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		res->a[ac - 1 - i] = ft_atoi(av[i + 1]);
		res->r[i] = res->a[ac - 1 - i];
		res->a_size++;
		i++;
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (j < i)
		{
			if (res->a[i] == res->a[j])
				p_error(1);
			j++;
		}
		i++;
	}
}

void	sort(t_res *res)
{
	bubble_sort(res);
	is_sorted(res);
	if (res->a_size <= 5)
		sort_simple(res);
	else
		sort_complex(res);
}

int	main(int ac, char **av)
{
	t_res	res;

	ft_memset(&res, sizeof(t_res));
	res.total = ac - 1;
	av_to_res(&res, ac - 1, av);
	sort(&res);
}