/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:19:35 by mchaibi           #+#    #+#             */
/*   Updated: 2024/12/09 10:31:57 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count = ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'c')
		count = ft_putchar((char)va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == 'x' || c == 'X')
		count = ft_puthex(va_arg(args, unsigned long), c);
	else if (c == 'p')
		count = ft_putptr(va_arg(args, unsigned long));
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}
