/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:39:16 by msosnova          #+#    #+#             */
/*   Updated: 2021/12/03 15:03:52 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_data	*data;

	data = (t_data *) malloc(sizeof(t_data));
	if (!data)
		exit(0);
	if (argc <= 2)
		exit (0);
	if (!ft_parsing_data (data, argc, argv))
		exit(0);
	if (ft_already_sorted_a(data))
	{
		ft_free_stack(data);
		exit(0);
	}
	if (argc >= 3 && argc <= 6)
		sort_max5(data);
	else
		sort_big_data(data);
	ft_free_stack(data);
	return (0);
}
