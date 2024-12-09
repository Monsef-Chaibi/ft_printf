/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:41:44 by mchaibi           #+#    #+#             */
/*   Updated: 2024/12/05 11:46:41 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_getchr(int n, char x)
{
	char	*str;

	str = NULL;
	if (x == 'x')
		str = "0123456789abcdef";
	else if (x == 'X')
		str = "0123456789ABCDEF";
	return (str[n]);
}

int	ft_puthex(unsigned int n, char x)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 16)
	{
		count += ft_puthex(n / 16, x); 
	}
	c = ft_getchr(n % 16, x);
	write(1, &c, 1);
	count++;
	return (count);
}
