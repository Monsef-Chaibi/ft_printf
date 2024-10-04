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
    return (i);
}