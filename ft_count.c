#include "ft_printf.h"

int count_var(char *str)
{
    int result;
    int i;

    result = 0;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '%')
        {
            if (str[i + 1] == 'c' || str[i + 1] == 's' || str[i + 1] == 'u')
                result++;
            else if (str[i + 1] == 'd' || str[i + 1] == 'c' || str[i + 1] == 'p')
                result++;
            else if (str[i + 1] == 'x' || str[i + 1] == 'X' || str[i + 1] == '%')
                result++;  
        }
        i++;
    }
    return (result);
}