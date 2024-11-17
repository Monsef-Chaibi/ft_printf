#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int c = 94;
	int *p = &c;
	printf("%p", p);
	// int c = ft_printf("slm test %s - %d%% %u in hex = %X\n", "monsef", 1337, 789, 789);
	// int d = printf("slm test %s - %d%% %u in hex = %X\n", "monsef", 1337, 789, 789);
	// printf("mine - %d vs org - %d", c, d);
}