# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaint-j <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/29 05:49:15 by psaint-j          #+#    #+#              #
#    Updated: 2015/05/29 17:31:30 by psaint-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
LIBF = -L./libft -lft
NAME = Wolf3D
SRCS = ./srcs/*.c

OBJ_PATH = ./obj
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME):
		@make -C libft/
		@mkdir $(OBJ_PATH)
		@gcc -c $(SRCS) -g
		@mv *.o $(OBJ_PATH)
		@gcc $(CFLAGS) $(LIBF) -o $(NAME) $(OBJ_PATH)/*.o
		@echo "\033[33m"Compilation of $(NAME) : "\033[32m"Success"\033[0m"

clean:
		@make clean -C libft/
		@rm -rf $(OBJ_PATH)
		@echo "\033[33m"$(OBJ_PATH) : "\033[32m"Deleted"\033[0m"

fclean: clean
		@make fclean -C libft/
		@rm -rf $(NAME)
		@echo "\033[33m"$(NAME) : "\033[32m"Deleted"\033[0m"

re: fclean all
