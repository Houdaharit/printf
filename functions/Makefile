NAME = libfct.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_convert_hex_ptr.c ft_put.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar -rc $(NAME) $(<:.c=.o)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
