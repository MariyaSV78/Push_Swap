/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_to_long_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 00:13:08 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/24 11:07:07 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sign(char a)
{
	if (a == '-')
		return (-1);
	return (1);
}

int	ft_nb_over(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

long int	ft_a_to_long_i(const char *str)
{
	long int	nb;
	long int	nb_over;
	int			i;
	int			sign;

	nb_over = 0;
	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = ft_sign (str[i]);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		if (nb < nb_over)
			return (ft_nb_over (sign));
		nb_over = nb;
		i++;
	}
	return (sign * nb);
}
