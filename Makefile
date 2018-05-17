NAME = libftprintf.a

HEADER = printf.h

FLAGS = -Wall -Werror -Wextra

SRC =	ft_printf.c \
		itoa_base.c \
		type_o.c \
		type_hex.c \
		type_integer.c \
		type_s.c \
		type_SS.c \
		type_c.c \
		type_percent.c \
		type_unsigned.c \
		type_U.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_itoa.c \
		ft_countdigits.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strsub.c \
		ft_strdup.c \
		ft_strnew.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strequ.c

TESTS = main.c \
		tests_o.c \
		tests_hex.c \
		tests_integer.c \
		tests_s.c \
		tests_c.c

all: $(NAME)

OBJ = $(SRC:.c=.o)

%.o: %.c $(HEADER)
	gcc -c $< -o $@

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar -rc $(NAME) $(OBJ)


main:
	gcc $(SRC) main.c

	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

