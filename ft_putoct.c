#include "ft_printf.h"

void ft_putoct(unsigned int n)
{
    char c;
    char *str ;

    if (n >= 8) {
        ft_putoct(n / 8); 
    }
    str = "01234567";
    c = str[n % 8];
    write(1, &c, 1);
}

void ft_putloct(unsigned long int n)
{
    char c;
    char *str ;

    if (n >= 8) {
        ft_putloct(n / 8); 
    }
    str = "01234567";
    c = str[n % 8];
    write(1, &c, 1);
}
