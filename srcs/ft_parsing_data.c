/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:46:44 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/23 14:57:31 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_check_is_nbr(int len, char *str[])
{
	int	i;
	int	j;

	i = 1;
	while (i <= len)
	{
		j = 0;
		while (str[i][j])
		{
			if ((ft_isalnum(str[i][j]) == 4) || (str[i][j] == '-' && j == 0))
				j++;
			else
			{
				ft_putstr_fd ("Error\n", 1);
				return (0);
			}
			if (j > 11)
			{
				ft_putstr_fd ("Error\n", 1);
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	ft_check_int(long int i, t_data *data)
{
	if (i < -2147483648L || i > 2147483647L)
	{
		ft_putstr_fd ("Error\n", 1);
		ft_free_stack(data);
		return (0);
	}
	return (1);
}

int	ft_check_doubling(t_data *data, int tmp_data)
{
	int	i;

	i = data->a_first;
	while (i >= 0)
	{
		if (data->a[i] == tmp_data)
		{
			ft_putstr_fd ("Error\n", 1);
			ft_free_stack(data);
			return (0);
		}
		i--;
	}
	return (1);
}

int	ft_parsing_data(t_data *data, int argc, char *argv[])
{
	int				i;
	int				len;
	long int		tmp_data;

	i = 1;
	len = argc - 1;
	if (!ft_check_is_nbr(len, argv))
		return (0);
	ft_init_data(data, len);
	i = len;
	while (i > 0)
	{
		tmp_data = ft_a_to_long_i(argv[i]);
		if (!ft_check_int(tmp_data, data))
			return (0);
		if (!ft_check_doubling(data, tmp_data))
			return (0);
		data->a[++data->a_first] = (int)tmp_data;
		i--;
	}
	return (1);
}
