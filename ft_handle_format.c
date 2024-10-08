#include "ft_printf.h"

int	ft_handle_format(const char *str, int i, va_list args)
{
	i++;
	if (str[i] == '%')
		ft_putchar_fd('%', 1);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (str[i] == 'c')
		ft_putchar_fd((char)va_arg(args, int), 1);
	else if (str[i] == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (str[i] == 'x')
		ft_puthex(va_arg(args, int), 0);
	else if (str[i] == 'X')
		ft_puthex(va_arg(args, int), 1);
	else if (str[i] == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (str[i] == 'p')
	{
		write(1, "0x", 2);
		ft_putptr(va_arg(args, unsigned long int));
	}
	else if (str[i] == 'o')
		ft_putoct(va_arg(args, unsigned int));
	else if (str[i] == 'O')
		ft_putloct(va_arg(args, unsigned int));
	return (i);
}
