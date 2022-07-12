/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:25:19 by msosnova          #+#    #+#             */
/*   Updated: 2021/12/03 12:10:36 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_re_sorting(t_data *data)
{
	int	mid;
	int	max_b;

	while (data->sort[data->j] != 0)
	{
		if (data->a[data->a_first] == data->tmp[data->i_min])
		{
			ft_ra(data, 1);
			data->i_min = data->i_min +1;
		}
		else
			ft_pb(data);
		data->sort[data->j]--;
	}
	(data->j)--;
	max_b = ft_max_b(data);
}

void	ft_sort_b(t_data *data, int av_b)
{
	if (data->b[data->b_first] == data->tmp[data->i_min])
	{
		ft_pa(data);
		ft_ra(data, 1);
		data->i_min = data->i_min + 1;
	}
	else
	{
		if (data->b[data->b_first] <= av_b)
			ft_rb(data, 1);
		else
		{
			ft_pa(data);
			data->sort[data->j]++;
		}
	}
}

void	ft_empty_stack_b(t_data *data, int av_b)
{
	int	i;
	int	max_b;

	while (data->b_first >= 0)
	{
		i = data->b_first;
		max_b = av_b;
		av_b = (max_b - data->tmp[data->i_min]) / 2 + data->tmp[data->i_min];
		data->j++;
		while (i >= 0)
		{
			ft_sort_b(data, av_b);
			i--;
			if (i == 1 && data->b[data->b_first] > data->b[data->b_first - 1])
				ft_sb(data, 1);
		}
	}
	if (data->j >= 0)
		if (data->sort[data->j] == 0)
			data->j--;
}

void	ft_rotate_max(t_data *data)
{
	while (data->a[0] != data->tmp[data->i_min - 1])
	{
		if (data->b[data->b_first] != data->tmp[data->i_min])
			ft_rrr(data);
		else
			ft_rra(data, 1);
	}
}

void	sort_big_data(t_data *data)
{
	int	av_a;
	int	i;

	ft_fast_sort_tab(data);
	while (!ft_already_sorted_a(data))
	{
		if (data->j >= 0)
			ft_re_sorting(data);
		else
		{
			i = (data->len - data->i_min);
			av_a = data->tmp[((data->len - 1) - data->i_min) / 2 + data->i_min];
			while (i > 0)
			{
				if (data->a[data->a_first] <= av_a)
					ft_pb(data);
				else
					ft_ra(data, 1);
				i--;
			}
			if (data->i_min != 0 && data->a[0] != data->tmp[data->i_min - 1])
				ft_rotate_max(data);
		}
		ft_empty_stack_b(data, av_a);
	}
}
