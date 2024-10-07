#include "ft_printf.h"

char ft_getchr(int n, int type)
{
    char *str ;
    
    str = (type == 0) ? "0123456789abcdef" : "0123456789ABCDEF" ;
    return str[n];    
}

void ft_puthex(int n, int type)
{
    char c;

    if (n >= 16) {
        ft_puthex(n / 16, type); 
    }
    c = ft_getchr(n % 16, type);
    write(1, &c, 1);
}