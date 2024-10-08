#include "ft_printf.h"
#include <stdio.h>



int main()
{
    ft_printf("Hello %s! You have %g new messages.\n", "", -5);
    ft_printf("Hex: %x, Upper Hex: %X\n", 255, 255);
    ft_printf("Unsigned: %u, Pointer: %p\n", 12345, (void*)&main);
    return 0;
}
