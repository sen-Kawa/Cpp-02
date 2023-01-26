NAME = fixed

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

SRCS = main.cpp Fixed.class.cpp

RM = rm -f

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "Success, executable ./$(NAME) created."

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@echo "Success, directory cleaned."

re: fclean all

.PHONY: all clean fclean re
