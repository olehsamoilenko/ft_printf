
NAME = ft_printf

HEADER = printf.h

FLAGS = -Wall -Werror -Wextra

SRC =	ft_printf.c \
		itoa_base.c

all: $(NAME)

OBJ = $(SRC:.c=.o)

%.o: %.c $(HEADER)
	gcc -c $< -o $@

$(NAME): $(OBJ)
	make -C libft
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ) libft/*.c
	
clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)

re: fclean all

