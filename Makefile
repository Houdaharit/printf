NAME = printf

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = src/ft_printf.c src/ft_put.c src/ft_convert_hex_ptr.c src/main.c

all : $(NAME)

$(NAME) : $(SRC) 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
