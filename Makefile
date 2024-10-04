SRC = main.c ft_putchar.c ft_printf.c
LIBFT_DIR = /home/monsef/Desktop/1337/ft_printf/Libft
LIBFT = $(LIBFT_DIR)/libft.a
CC  = gcc
CFLAGS = -Wall -Wextra -Werror
OUT = main

all: $(LIBFT)
	@clear
	@$(CC) $(SRC) $(LIBFT) -o $(OUT)
	@./$(OUT)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	@rm -f $(OUT)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(LIBFT)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all
