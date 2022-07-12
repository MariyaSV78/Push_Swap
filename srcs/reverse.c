/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:42:08 by msosnova          #+#    #+#             */
/*   Updated: 2021/12/03 12:08:22 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_data *data, int is_print)
{
	int	tmp;
	int	i;

	if (data->a_first < 1)
		return ;
	tmp = data->a[0];
	i = 0;
	while (i < data->a_first)
	{
		data->a[i] = data->a[i + 1];
		i++;
	}
	data->a[i] = tmp;
	if (data->a_first > 0 && is_print == 1)
		ft_putstr_fd("rra\n", 1);
}

void	ft_rrb(t_data *data, int is_print)
{
	int	i;
	int	tmp;

	if (data->b_first < 1)
		return ;
	tmp = data->b[0];
	i = 0;
	while (i < data->b_first)
	{
		data->b[i] = data->b[i + 1];
		i++;
	}
	data->b[i] = tmp;
	if (data->b_first > 0 && is_print == 1)
		ft_putstr_fd("rrb\n", 1);
}

void	ft_rrr(t_data *data)
{
	ft_rra(data, 0);
	ft_rrb(data, 0);
	if (data->a_first > 0 || data->b_first > 0)
		ft_putstr_fd("rrr\n", 1);
}
