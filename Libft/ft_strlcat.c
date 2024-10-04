#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t src_len;
	size_t dest_len;
	size_t i;
	size_t x;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	
	if (size <= dest_len)
	{
		return (src_len + size);
	}
	i = dest_len;
	x = 0;
	while (src[x] !=  '\0' && i < size - 1)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}