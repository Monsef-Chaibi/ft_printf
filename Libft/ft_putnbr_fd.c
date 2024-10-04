#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *str_tmp;

	str_tmp = ft_itoa(n);
	ft_putstr_fd(str_tmp, fd);
}