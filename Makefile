SRC = main.c ft_putchar.c ft_printf.c
CC  = gcc
CFLAGS = -Wall -Wextra -Werror
OUT = main

all:
	@clear
	@$(CC) $(SRC) -o $(OUT)
	@./$(OUT)