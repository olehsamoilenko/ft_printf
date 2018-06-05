NAME = libftprintf.a

HEADER = printf.h

FLAGS = -Wall -Werror -Wextra

SRC =	ft_printf.c \
		type_o.c \
		type_hex.c \
		type_integer.c \
		type_s.c \
		type_c.c \
		type_unsigned.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_itoa.c \
		ft_countdigits.c \
		ft_strlen.c \
		ft_strsub.c \
		itoa_base.c \
		ft_strdup.c \
		ft_strnew.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strequ.c \
		ft_strdel.c \
		recognise.c \
		parsing.c

all: $(NAME)

OBJ = $(SRC:.c=.o)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

