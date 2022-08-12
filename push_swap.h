/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gangjiho <gangjiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 19:59:21 by gangjiho          #+#    #+#             */
/*   Updated: 2022/08/13 00:12:15 by gangjiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647

typedef struct	s_result
{
	int	a[50000];
	int	a_size;
	int	b[50000];
	int	b_size;
	int	r[50000];
	int	total;
	int	chk;
	int	num;
}t_res;

void	ft_memset(void *dst, int size);
int		ft_atoi(char *str);
void	p_error(int type);
void	sort_simple(t_res *res);
void	sort_complex(t_res *res);
void	pb(t_res *r);
void	rb(int *a, int size);
void	rrb(int *a, int size);
void	sb(int	*a, int size);
void	pa(t_res *r);
void	ra(int *a, int size);
void	rra(int *a, int size);
void	sa(int	*a, int size);
void	bubble_sort(t_res *res);
void	b_to_a(t_res *res);
void	is_sorted(t_res *res);
#endif