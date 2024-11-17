/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:41:44 by mchaibi           #+#    #+#             */
/*   Updated: 2024/11/15 17:52:17 by mchaibi          ###   ########.fr       */
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

int	ft_puthex(int n, char x)
{
	char	c;
	int		count;
	unsigned int nb;

	nb = (unsigned int)n;
	count = 0;
	if (nb >= 16)
	{
		count += ft_puthex(nb / 16, x); 
	}
	c = ft_getchr(nb % 16, x);
	write(1, &c, 1);
	count++;
	return (count);
}
