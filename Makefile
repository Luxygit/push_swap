# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dievarga <dievarga@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/05 12:31:55 by dievarga          #+#    #+#              #
#    Updated: 2026/01/08 17:58:18 by dievarga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags -i cflag would include some dir to be searched for headers
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I.

# Library name
NAME    = push_swap.a

# Source and object files
SRCS	= main.c

OBJ     = $(SRCS:%.c=%.o)
HEADER = push_swap.h

# Default rule
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Rule to compile .c to .o
%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean objects + library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
