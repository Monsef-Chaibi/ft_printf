#include "libft.h"

void	ft_space(const char *s, size_t *i)
{
	while ((9 <= s[*i] && s[*i] <= 13) || s[*i] == 32)
	{
		(*i)++;
	}
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	i = 0;
	ft_space(nptr, &i);
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if ((nptr[i] == '-' || nptr[i] == '+')
			&& (nptr[i + 1] == '-' || nptr[i + 1] == '+'))
			return (0);
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (48 <= nptr[i] && nptr[i] <= 57)
	{
		result *= 10;
		result = result + (nptr[i] - 48);
		i++;
	}
	return (result * sign);
}