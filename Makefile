# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 10:27:11 by hachahbo          #+#    #+#              #
#    Updated: 2023/05/02 15:53:25 by hachahbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Werror -Wall -Werror

SRS = rotation.c swap.c reverse_rotation.c push.c push_swap.c \
		ft_change_the_type_1.c move_to_stack_b.c longest_1.c\
		best_move.c ft_parcing.c  sort_the_five_three.c longest_2.c ft_change_the_type_2.c \
		instraction.c ft_parcing2.c f_helper1.c f_helper2.c f_helper3.c f_helper4.c
		
OBJS = $(SRS:%.c=%.o)

RM = rm -f

LIBFT_DIR = ./libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ./ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a

SRCS_PRINTF = ft_printf.c ft_putchar.c \
		ft_putnbr.c ft_putstr.c \
		ft_puthex.c ft_putptr.c

SRCS_LIBFT = ft_putstr_fd.c \
ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_split.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_strtrim.c ft_tolower.c ft_toupper.c  ft_bzero.c \
ft_atoi.c ft_strlen.c ft_substr.c ft_putchar_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_striteri.c  ft_lstnew.c ft_lstadd_front.c\
ft_lstsize.c ft_lstadd_back.c ft_lstlast.c

LIBFT_OBJ = ${SRCS_LIBFT:%.c=./libft/%.o}
PRINTF_OBJ = ${SRCS_PRINTF:%.c=./ft_printf/%.o}

all : $(NAME)
		@echo "																		  "
		@echo "██████╗░██╗░░░██╗░██████╗██╗░░██╗░██████╗░██╗░░░░░░░██╗░█████╗░██████╗░"
		@echo "██╔══██╗██║░░░██║██╔════╝██║░░██║██╔════╝░██║░░██╗░░██║██╔══██╗██╔══██╗"
		@echo "██████╔╝██║░░░██║╚█████╗░███████║╚█████╗░░╚██╗████╗██╔╝███████║██████╔╝"
		@echo "██╔═══╝░██║░░░██║░╚═══██╗██╔══██║░╚═══██╗░░████╔═████║░██╔══██║██╔═══╝░"
		@echo "██║░░░░░╚██████╔╝██████╔╝██║░░██║██████╔╝░░╚██╔╝░╚██╔╝░██║░░██║██║░░░░░"
		@echo "╚═╝░░░░░░╚═════╝░╚═════╝░╚═╝░░╚═╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝░░╚═╝╚═╝░░░░░"
		@echo "																		  "
#$(NAME):$(OBJS)

$(NAME) : $(OBJS)  $(LIBFT_OBJ) $(PRINTF_OBJ) 
		@make -C $(LIBFT_DIR)
	@make -C $(PRINTF_DIR)
	 $(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) $(PRINTF_LIB) -o $@
	
%.o : %.c push_swap.h libft/libft.h ft_printf/ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

bonus : all $(NAME_BONUS)

clean :
	@make -C $(LIBFT_DIR) $@
	@make -C $(PRINTF_DIR) $@
	@$(RM) $(OBJS)

fclean :
	@make -C $(LIBFT_DIR) $@
	@make -C $(PRINTF_DIR) $@
	@$(RM) $(OBJS)
	@$(RM) $(NAME)
	
re : fclean all
