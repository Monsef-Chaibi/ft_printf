#include "ft_printf.h"

int count_var(char *str)
{
    int result;
    int i;

    result = 0;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '%' && str[i + 1] == 'c')
            result++;
        i++;
    }
    return (result);
}

void ft_printf(char *str, ...)
{
    char c;
    int i;
    va_list args;
    va_start(args, str);

    i = 0;
    while (i < count_var(str))
    {
        c = (char)va_arg(args, int);
        write(1, &c, 1);
        i++;
    }
    va_end(args); 
}