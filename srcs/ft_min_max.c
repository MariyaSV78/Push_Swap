/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:07:18 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/25 10:05:23 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_i_min_a(t_data *data)
{
	int	i;
	int	i_min;

	i_min = 0;
	i = 1;
	while (i <= data->a_first)
	{
		if (data->a[i] < data->a[i_min])
			i_min = i;
		i++;
	}
	return (i_min);
}

int	ft_max_a(t_data *data)
{
	int	i;
	int	max_a;

	i = 0;
	max_a = 0;
	while (i <= data->a_first)
	{
		if (data->a[i] > max_a)
			max_a = data->a[i];
		i++;
	}
	return (max_a);
}

int	ft_max_b(t_data *data)
{
	int	i;
	int	max_b;

	max_b = 0;
	i = 0;
	while (i <= data->b_first)
	{
		if (data->b[i] > max_b)
			max_b = data->b[i];
		i++;
	}
	return (max_b);
}
