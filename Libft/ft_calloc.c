#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *s_new;
	size_t i;

	i = 0;
	s_new = malloc(nmemb * size);
	if	(!s_new)
		return (NULL);
	while(i < (nmemb * size))
	{
		s_new[i] = 0;
		i++;
	}
	return (s_new);
}