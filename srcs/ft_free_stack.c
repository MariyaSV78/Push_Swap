/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:02:41 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/23 14:53:22 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_free_stack(t_data *data)
{
	free (data->a);
	free (data->b);
	free (data->tmp);
	free (data->sort);
	free (data);
}
