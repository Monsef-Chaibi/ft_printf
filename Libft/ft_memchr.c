#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*s_tmp;
	size_t		i;

	s_tmp = (char *)s;
	i = 0;
	while(i < n)
	{
		if(s_tmp[i] == (unsigned char)c)
		{
			return(&s_tmp[i]);
		}
		i++; 
	}
	return(NULL);
}