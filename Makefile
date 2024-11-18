NAME = libftprintf.a

SRC = ft_printf.c ft_putunbr.c ft_handle_format.c ft_puthex.c ft_putnbr.c ft_strlen.c ft_putstr.c ft_putchar.c ft_putptr.c
OBJ = $(SRC:.c=.o)

HEADERS = ft_printf.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
