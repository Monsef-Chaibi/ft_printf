#include "ft_printf.h"

int ft_handle_flag(const char *str, int i, va_list args)
{
    i++;
    if (str[i] == '#')
    {
        if (str[i + 1] == 'o')
        {
            write(1, "0", 1);
            i = ft_handle_format(str, i, args);
        }
        else if (str[i + 1] == 'x' || str[i + 1] == 'X')
        {
            write(1, "0x", 2);
            i = ft_handle_format(str, i, args);
        }
    }
    return i;
}