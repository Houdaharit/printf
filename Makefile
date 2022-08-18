NAME = printf

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_put.c ft_convert_hex_ptr.c main.c

all : $(NAME)

$(NAME) : $(SRC) 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
