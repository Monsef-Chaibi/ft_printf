#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_tmp;
	size_t	str_tmp_len;
	size_t	i;
	size_t	x;

	str_tmp_len = ft_strlen(s1) + ft_strlen(s2);
	str_tmp = malloc(str_tmp_len + 1);
	i = 0;
	x = 0;
	if (!str_tmp)
		return (NULL);
	while (s1[x] != '\0')
		str_tmp[i++] = s1[x++];
	x = 0;
	while (s2[x] != '\0')
		str_tmp[i++] = s2[x++];
	str_tmp[i] = '\0';
	return (str_tmp);
}