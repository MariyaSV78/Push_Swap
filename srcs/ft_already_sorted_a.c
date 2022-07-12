/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_already_sorted_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:17:02 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/23 14:51:07 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_already_sorted_a(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->a_first)
	{
		if (data->a[i] > data->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
