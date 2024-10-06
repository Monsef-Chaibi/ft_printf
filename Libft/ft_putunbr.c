#include "libft.h"

void ft_putunbr(unsigned int n)
{
	char *str_tmp;

	str_tmp = ft_utoa(n);
	ft_putstr_fd(str_tmp, 1);
}