# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 10:27:11 by hachahbo          #+#    #+#              #
#    Updated: 2023/05/16 12:38:21 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
CC = cc
CFLAGS = -Werror -Wall -Wextra

OBJS = rotation.o swap.o reverse_rotation.o push.o push_swap.o \
		ft_change_the_type_1.o move_to_stack_b.o longest_1.o\
		best_move.o ft_parcing.o  sort_the_five_three.o longest_2.o ft_change_the_type_2.o \
		instraction.o ft_parcing2.o f_helper1.o f_helper2.o f_helper3.o f_helper4.o

RM = rm -f

all : $(NAME)
	
		@echo "																		  "
		@echo "██████╗░██╗░░░██╗░██████╗██╗░░██╗░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░"
		@echo "██╔══██╗██║░░░██║██╔════╝██║░░██║██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗"
		@echo "██████╔╝██║░░░██║╚█████╗░███████║╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝"
		@echo "██╔═══╝░██║░░░██║░╚═══██╗██╔══██║░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░"
		@echo "██║░░░░░╚██████╔╝██████╔╝██║░░██║██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░"
		@echo "╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░"
		@echo "																		  "

$(NAME) : $(OBJS)
	@cd libft && make 
	@cd ft_printf && make 
	@$(CC) $(CFLAGS) $(OBJS) ./ft_printf/libftprintf.a ./libft/libft.a -o $(NAME)
bonus :
	@cd checkers && make
	
$(OBJS) : push_swap.h

clean :
	@cd checkers && make clean 
	@cd libft && make clean
	@cd ft_printf && make clean
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) checker
	@cd libft && make fclean
	@cd ft_printf && make fclean
	@$(RM) $(NAME)
	
re : fclean all