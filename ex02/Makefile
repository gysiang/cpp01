# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 23:46:22 by gyong-si          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2024/10/23 13:24:37 by gyong-si         ###   ########.fr        #
=======
#    Updated: 2024/10/26 22:07:47 by gyong-si         ###   ########.fr        #
>>>>>>> 264a20c (ready to submit)
#                                                                              #
# **************************************************************************** #

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = a.out

SRCS = main.cpp

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
