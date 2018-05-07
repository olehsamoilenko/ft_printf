
NAME = ft_printf

HEADER = printf.h

FLAGS = -Wall -Werror -Wextra

SRC =	ft_printf.c \
		itoa_base.c \
		type_o.c \
		type_hex.c \
		type_integer.c \
		type_s.c \
		main.c tests_o.c tests_hex.c tests_integer.c tests_s.c

all: $(NAME)

OBJ = $(SRC:.c=.o)

%.o: %.c $(HEADER)
	gcc -c $< -o $@

$(NAME): $(OBJ)
	make -C libft
	gcc -c $(SRC)
	gcc $(FLAGS) -o $(NAME) $(OBJ) libft/*.c
	
clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)

re: fclean all

