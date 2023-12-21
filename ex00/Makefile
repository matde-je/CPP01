
# Compiler
CC = g++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS = $(SRCS:.cpp=.o)

name = zombie

# Build name
$(name): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(name)

# Compile source files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files

fclean:
	rm -f $(OBJS) $(name)

clean:
	rm -f $(OBJS)

re: fclean $(name)

