# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmateque <hmateque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 14:17:22 by hmateque          #+#    #+#              #
#    Updated: 2025/01/14 17:24:31 by hmateque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = Encapsulation

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./src/ex01.cpp

OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(Name)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re