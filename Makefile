# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 10:27:11 by hachahbo          #+#    #+#              #
#    Updated: 2023/03/20 14:49:04 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  
	 
NAME = push_swap
CC = cc
CFLAGS = -Werror -Wall -Werror -g
SRS = rotation.c swap.c reverse_rotation.c push.c push_swap.c \
		ft_sort_with_index.c ft_change_the_type.c move_to_stack_b.c longest.c\
		best_move.c
OBJS = $(SRS:.c=.o)
RM = rm -f

LIBFT_DIR = ./libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a


all : $(NAME)
		@echo "																		  "
		@echo "██████╗░██╗░░░██╗░██████╗██╗░░██╗░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░"
		@echo "██╔══██╗██║░░░██║██╔════╝██║░░██║██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗"
		@echo "██████╔╝██║░░░██║╚█████╗░███████║╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝"
		@echo "██╔═══╝░██║░░░██║░╚═══██╗██╔══██║░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░"
		@echo "██║░░░░░╚██████╔╝██████╔╝██║░░██║██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░"
		@echo "╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░"
		@echo "																		  "
$(NAME):$(OBJS)
$(NAME) : $(OBJS)
	@make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $^ $(LIBFT_LIB) -o $@
%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
bonus : all
clean :
	@make -C $(LIBFT_DIR) $@
	$(RM) $(OBJS)
fclean : clean
	@make -C $(LIBFT_DIR) $@
	$(RM) $(NAME)
re : fclean all