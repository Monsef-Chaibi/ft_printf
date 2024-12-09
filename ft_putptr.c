/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaibi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:39:19 by mchaibi           #+#    #+#             */
/*   Updated: 2024/12/05 12:08:39 by mchaibi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_gethex(unsigned long n)
{
	char	c;
	int		count;
	char	*str;

	str = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_gethex(n / 16);
	}
	c = str[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putptr(unsigned long nb)
{
	int	count;

	count = 2;
	write(1, "0x", 2);
	count += ft_gethex(nb);
	return (count);
}
