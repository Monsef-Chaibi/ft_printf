#include "libft.h"


int ft_count_dig_u(unsigned int x)
{
	int results;

	if (!x)
		return (1);
	
	results = 1;
	while(x / 10 != 0)
	{
		results++;
		x /= 10;
	}
	return (results);
}

char *ft_putchar_u(int nbr_dig,unsigned int n)
{	
	char *str; 

	str = malloc(nbr_dig + 1);
	if (!str)
		return (NULL);
	str[nbr_dig] = '\0';
	nbr_dig--;
	while (nbr_dig >= 0)
	{
		str[nbr_dig] = (n % 10) + 48;
		nbr_dig--;
		n /= 10;
	}
	return (str);
}

char *ft_utoa(unsigned int n)
{
	char *str_tmp;
	int nbr_dig;

	nbr_dig = ft_count_dig_u(n);
	str_tmp = ft_putchar_u(nbr_dig, n);
	return (str_tmp);
}