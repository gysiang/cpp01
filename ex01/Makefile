# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 17:44:05 by gyong-si          #+#    #+#              #
#    Updated: 2024/10/23 13:24:30 by gyong-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = zombies

SRCS = main.cpp \
		zombieHorde.cpp \
		Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(TARGET)

re: fclean all

.PHONY: all clean
