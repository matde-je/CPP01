
# Compiler
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ZombieHorde.cpp Zombie.cpp

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
