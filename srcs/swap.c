/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:40:43 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/23 15:03:16 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_data *data, int is_print)
{
	int	tmp;

	if (data->a_first >= 1)
	{
		tmp = data->a[data->a_first];
		data->a[data->a_first] = data->a[data->a_first - 1];
		data->a[data->a_first - 1] = tmp;
		if (is_print == 1)
			ft_putstr_fd("sa\n", 1);
	}
}

void	ft_sb(t_data *data, int is_print)
{
	int	tmp;

	if (data->b_first >= 1)
	{
		tmp = data->b[data->b_first];
		data->b[data->b_first] = data->b[data->b_first - 1];
		data->b[data->b_first - 1] = tmp;
		if (is_print == 1)
			ft_putstr_fd("sb\n", 1);
	}
}

void	ft_ss(t_data *data)
{
	if (data->a_first >= 1 || data->a_first >= 1)
	{
		ft_sa (data, 0);
		ft_sb (data, 0);
		ft_putstr_fd("ss\n", 1);
	}
}
