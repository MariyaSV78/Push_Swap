/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:40:57 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/23 14:58:34 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_data *data)
{
	if (data->b_first >= 0)
	{
		data->a_first = data->a_first + 1;
		data->a[data->a_first] = data->b[data->b_first];
		data->b_first = data->b_first - 1;
		ft_putstr_fd("pa\n", 1);
	}
}

void	ft_pb(t_data *data)
{
	if (data->a_first >= 0)
	{
		data->b_first = data->b_first + 1;
		data->b[data->b_first] = data->a[data->a_first];
		data->a_first = data->a_first - 1;
		ft_putstr_fd("pb\n", 1);
	}
}
