/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 01:49:14 by msosnova          #+#    #+#             */
/*   Updated: 2021/06/06 01:50:48 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (2);
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	return (0);
}