/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:57:17 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/25 09:56:53 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_2(t_data *data)
{
	if (data->a_first < 1)
		return ;
	if (data->a[1] > data->a[0])
		ft_sa(data, 1);
}

void	ft_sort_3(t_data *data)
{
	if (data->a_first < 2)
		return ;
	while (!ft_already_sorted_a(data))
	{
		if (data->a[2] > data->a[1])
			ft_sa(data, 1);
		if (data->a[1] > data->a[0])
			ft_rra(data, 1);
	}
}

void	ft_sort_4(t_data *data)
{
	int	i_min;

	if (data->a_first < 3)
		return ;
	i_min = ft_i_min_a(data);
	if (i_min < data->a_first / 2)
	{
		while (i_min >= 0)
		{
			ft_rra(data, 1);
			i_min--;
		}
	}
	else
	{
		while (i_min < data->a_first)
		{
			ft_ra(data, 1);
			i_min++;
		}
	}
	ft_pb(data);
	ft_sort_3(data);
	ft_pa(data);
}

void	ft_sort_5(t_data *data)
{
	int	i_min;

	if (data->a_first < 4)
		return ;
	i_min = ft_i_min_a(data);
	if (i_min < data->a_first / 2)
	{
		while (i_min >= 0)
		{
			ft_rra(data, 1);
			i_min--;
		}
	}
	else
	{
		while (i_min < data->a_first)
		{
			ft_ra(data, 1);
			i_min++;
		}
	}
	ft_pb(data);
	ft_sort_4(data);
	ft_pa(data);
}

void	sort_max5(t_data *data)
{
	if (data->len == 2)
		ft_sort_2(data);
	if (data->len == 3)
		ft_sort_3(data);
	if (data->len == 4)
		ft_sort_4(data);
	if (data->len == 5)
		ft_sort_5(data);
}
