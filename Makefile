# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msosnova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 12:03:56 by msosnova          #+#    #+#              #
#    Updated: 2022/06/07 15:24:37 by msosnova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

OBJ =	srcs/ft_parsing_data.o\
		srcs/ft_init_data.o\
		srcs/ft_a_to_long_i.o \
		srcs/ft_free_stack.o \
		srcs/ft_already_sorted_a.o\
		srcs/swap.o\
		srcs/push.o\
		srcs/rotate.o\
		srcs/reverse.o\
		srcs/sort_max5.o\
		srcs/ft_min_max.o\
		srcs/ft_fast_sort_tab.o\
		srcs/sort_big_data.o\
		

INC = 	-I include -I libft

FLAGS = -Wall -Wextra -Werror
CC 	  =	gcc

LIBFT = libft/libft.a


%.o: %.c
	@echo "\033[93m>> Push_swap obj $@\033[0m"
	$(CC) $(INC) -o $@ -c $<

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	echo "$(OBJ)"
	@echo "\033[93m>> Push_swap compilation\033[0m"
	$(CC) $(FLAGS) $(INC) main.c -o $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	@echo "\033[93m>> Libft compilation\033[0m"
	make -C libft

clean:
	@echo "\033[93m>> Cleaning objects (.obj)\033[0m"
	make $@ -C libft
	rm -f $(OBJ)

fclean: clean
	make $@ -C libft
	rm -f $(NAME)

re:
	make fclean
	make all

bonus: $(NAME)

.PHONY: all, clean, fclean, re, bonus

