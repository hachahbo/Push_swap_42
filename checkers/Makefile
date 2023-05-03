# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 11:38:17 by hachahbo          #+#    #+#              #
#    Updated: 2023/05/03 02:04:41 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
NAME_BONUS = checker
CC = cc
CFLAGS = -Werror -Wall -Werror

OBJS = ft_checker.o rotation.o swap.o reverse_rotation.o push.o \
		ft_change_the_type_1.o ft_parcing.o  ft_change_the_type_2.o \
		instraction.o ft_parcing2.o get_next_line.o get_next_line_utils.o
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	@cd ../libft && make 
	@cd ../ft_printf && make 
	@$(CC) $(CFLAGS) $(OBJS) ../ft_printf/libftprintf.a ../libft/libft.a -o $(NAME)
	@mv $(NAME) ../

$(OBJS) : checker.h
clean :
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)
	
re : fclean all 
