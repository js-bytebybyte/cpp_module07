# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 10:46:53 by jsteenpu          #+#    #+#              #
#    Updated: 2024/11/06 13:08:56 by jsteenpu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME
NAME = whatever

# COMPILATION
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

# Object files
SRCS_OBJS = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(SRCS_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all: $(NAME)

clean:
	rm -f $(SRCS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re