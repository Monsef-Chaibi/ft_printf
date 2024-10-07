#include "ft_printf.h"

void ft_putptr(unsigned long int n)
{
    char c;
    char *str ;

    if (n >= 16) {
        ft_putptr(n / 16); 
    }
    str = "0123456789abcdef";
    c = str[n % 16];
    write(1, &c, 1);
}