/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fast_sort_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:18:52 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/25 17:43:33 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *p_a, int *p_b)
{
	int	c;

	c = *p_a;
	*p_a = *p_b;
	*p_b = c;
}

void	ft_fast_sort_tab(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->len)
	{
		data->tmp[i] = data->a[i];
		i++;
	}
	i = 0;
	while (i < data->len - 1)
	{
		j = 0;
		while (j < data->len - 1 - i)
		{	
			if (data->tmp[j] > data->tmp[j + 1])
				ft_swap(&data->tmp[j], &data->tmp[j + 1]);
			j++;
		}
		i++;
	}
}
