#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str_tmp;
	size_t i;
	size_t s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
        len = 0;
	str_tmp = malloc(len + 1);
	if (!str_tmp)
		return (NULL);
	while(s[i + start] != '\0' && i < len)
	{
		str_tmp[i] = s[i + start];
		i++;
	}
	str_tmp[i] = '\0';
	return(str_tmp);
}