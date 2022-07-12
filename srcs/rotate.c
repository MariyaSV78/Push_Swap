/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:41:15 by msosnova          #+#    #+#             */
/*   Updated: 2021/12/03 12:09:05 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_data *data, int is_print)
{
	int	i;
	int	tmp;

	if (data->a_first < 1)
		return ;
	i = data->a_first;
	tmp = data->a[data->a_first];
	while (i > 0)
	{
		data->a[i] = data->a[i - 1];
		i--;
	}
	data->a[i] = tmp;
	if (data->a_first > 0 && is_print == 1)
		ft_putstr_fd("ra\n", 1);
}

void	ft_rb(t_data *data, int is_print)
{
	int	i;
	int	tmp;

	if (data->b_first < 1)
		return ;
	i = data->b_first;
	tmp = data->b[data->b_first];
	while (i > 0)
	{
		data->b[i] = data->b[i - 1];
		i--;
	}
	data->b[i] = tmp;
	if (data->b_first > 0 && is_print == 1)
		ft_putstr_fd("rb\n", 1);
}

void	ft_rr(t_data *data)
{
	ft_ra(data, 0);
	ft_rb(data, 0);
	if (data->a_first > 0 || data->b_first > 0)
		ft_putstr_fd("rr\n", 1);
}
