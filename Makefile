NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_put.c ft_convert_hex_ptr.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) 
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

mclean: all clean

re: fclean all
