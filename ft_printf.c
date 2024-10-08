#include "ft_printf.h"

void ft_printf(const char *str, ...)
{
    va_list args;
    int i = 0;

    va_start(args, str);

    while (str[i])
    {
        if (str[i] == '%')
        {
            if(str[i + 1] == '#')
                i = ft_handle_flag(str, i, args);
            else
            i = ft_handle_format(str, i, args);
        }
        else
            ft_putchar_fd(str[i], 1);
        i++;
    }

    va_end(args);
}