SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = sed

CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *.replace

re: fclean
	make all

.PHONY: all clean fclean re