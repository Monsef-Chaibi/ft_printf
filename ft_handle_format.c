#include "ft_printf.h"

int ft_handle_format(const char *str, int i, va_list args)
{
    i++;

    if (str[i] == 'd')
       ft_putnbr_fd(va_arg(args, int), 1);
    if (str[i] == 'c')
        ft_putchar_fd((char)va_arg(args, int), 1);
    if (str[i] == 's')
        ft_putstr_fd(va_arg(args, char *), 1);
    if (str[i] == '%')
        ft_putchar_fd('%', 1);
    if (str[i] == 'x')
        ft_puthex(va_arg(args, int), 0);
    if (str[i] == 'X')
        ft_puthex(va_arg(args, int), 1);
    if (str[i] == 'u')
        ft_putunbr(va_arg(args, unsigned int));
    if (str[i] == 'p')
    {
        write(1, "0x", 2);
        ft_putptr(va_arg(args,unsigned long int));
    }
    return (i);
}