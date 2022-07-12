/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:02:29 by msosnova          #+#    #+#             */
/*   Updated: 2021/12/03 16:01:58 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_data(t_data *data, int len)
{
	data->len = len;
	data->i_min = 0;
	data->i_max = len - 1;
	data->a_first = -1;
	data->b_first = -1;
	data->j = -1;
	data->a = (int *)ft_calloc(len, sizeof(int));
	data->b = (int *)ft_calloc(len, sizeof(int));
	data->tmp = (int *)ft_calloc(len, sizeof(int));
	data->sort = (int *)ft_calloc(len, sizeof(int));
	if (!data->a || !data->b || !data->tmp || !data->sort)
	{
		ft_free_stack (data);
		exit (0);
	}
}
