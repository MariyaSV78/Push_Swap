/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:40:06 by msosnova          #+#    #+#             */
/*   Updated: 2021/11/25 18:56:56 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_data
{
	int	*a;
	int	*b;
	int	*tmp;
	int	*sort;
	int	j;
	int	i_min;
	int	i_max;
	int	a_first;
	int	b_first;
	int	len;
}		t_data;

int			ft_parsing_data(t_data *stack, int argc, char *argv[]);
void		ft_init_data(t_data *data, int len);
long int	ft_a_to_long_i(const char *str);
void		ft_free_stack(t_data *data);
int			ft_already_sorted_a(t_data *data);
void		ft_putstr_fd(char const *s, int fd);
int			ft_isalnum(int n);
void		ft_sa(t_data *data, int is_print);
void		ft_sb(t_data *data, int is_print);
void		ft_ss(t_data *data);
void		ft_pa(t_data *data);
void		ft_pb(t_data *data);
void		ft_ra(t_data *data, int is_print);
void		ft_rb(t_data *data, int is_print);
void		ft_rr(t_data *data);
void		ft_rra(t_data *data, int is_print);
void		ft_rrb(t_data *data, int is_print);
void		ft_rrr(t_data *data);
void		sort_max5(t_data *data);
int			ft_i_min_a(t_data *data);
int			ft_max_a(t_data *data);
int			ft_max_b(t_data *data);
void		sort_big_data(t_data *data);
void		ft_fast_sort_tab(t_data *data);
void		ft_sort_stack_b(t_data *data, int mid_b);
void		ft_sort_b(t_data *data, int mid_b);
void		ft_rotate_max(t_data *data);
//tests
void		test_print_stack(t_data *data);
#endif
