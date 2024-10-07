#include "ft_printf.h"
#include <stdio.h>




int main(){
    // char c = 'A';
    // char  *i = "Best one";
    // unsigned int q = 1423545;
    // ft_printf("My Name is Monsef i have %d and i am the %s %c , i set 20%% for my ft_printf project and this my age in hex %x this my unsigned number %u", 21, i, '!', 1087, q);
    int a = 9;
    int *p = &a;

    printf("%p\n", p);
    ft_printf("%p", p);
}   
