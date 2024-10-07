SRC = main.c ft_printf.c ft_handle_format.c ft_putunbr.c ft_puthex.c ft_putptr.c
LIBFT_DIR = ./Libft
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
