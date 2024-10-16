CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++11

TARGET = ex03

SRCS = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

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
