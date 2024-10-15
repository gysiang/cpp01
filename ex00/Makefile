CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++11

TARGET = zombies

SRCS = main.cpp \
		newZombie.cpp \
		randomChump.cpp \
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
	rm rf $(OBJS) $(TARGET)

.PHONY: all clean
