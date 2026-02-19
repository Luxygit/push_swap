# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/05 12:31:55 by dievarga          #+#    #+#              #
#    Updated: 2026/02/19 20:08:10 by dievarga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

NAME    = push_swap

SRC_DIR	= src
LIBFT_DIR = libft
INC_DIR = includes

INCLUDES = -I $(INC_DIR) -I $(LIBFT_DIR)

LIBFT	= $(LIBFT_DIR)/libft.a

SRCS	= \
		src/main.c \
		src/parse.c \
		src/index.c \
		src/utils.c \
		src/ops_push.c \
		src/ops_swap.c \
		src/ops_rotate.c \
		src/sort_small.c \
		src/sort_chunks.c \
		src/stack_utils.c \
		src/chunk_utils.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	 $(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME) 

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c $(INC_DIR)/push_swap.h Makefile
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
