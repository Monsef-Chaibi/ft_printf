#ifndef FTPRINTF_H
#define FTPRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "Libft/libft.h"

void ft_printf(const char *str, ...);
int ft_handle_format(const char *str, int i, va_list args);
void ft_putunbr(unsigned int n);
void ft_puthex(int n, int type);
void ft_putptr(unsigned long int n);

#endif