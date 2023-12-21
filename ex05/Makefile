

# Compiler
CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Karen.cpp

OBJS = $(SRCS:.cpp=.o)

name = karen

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
