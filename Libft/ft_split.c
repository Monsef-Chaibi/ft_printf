#include "libft.h"

int	ft_get_word_len(const char *s, char c, int start)
{
	int	len;
	int i;
	int num_del;

	num_del = 0;
	i = 0;
	len = 0;
	if(start != 0)
	{
		while (num_del != start)
		{
			if (s[i] == c)
				num_del++;
			i++;
		}
	}
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

int ft_count_words(char const *s, char c)
{
	int i;
	int result;

	result = 0;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			result++;
		i++;
	}
	result += 2;
	return (result);
}

char *ft_extract_word(const char *s, char c, int start)
{
	char *str;
	int i;
	int x;
	int num_del;

	num_del = 0;
	i = 0;
	x = 0;
	str = malloc(ft_get_word_len(s, c, start) + 1);
	if(start != 0)
	{
		while (num_del != start)
		{
			if (s[i] == c)
				num_del++;
			i++;
		}
	}
	while (s[i] != c && s[i] != '\0')
		str[x++] = s[i++];
	str[x] = '\0';
	return (str);
}


char **ft_split(char const *s, char c)
{
	int num_arr;
	char **arr_tmp;
	int i;

	num_arr = ft_count_words(s, c);
	arr_tmp = malloc(sizeof (char *) * num_arr);
	i = 0;
	while(i < num_arr)
	{
		arr_tmp[i] = ft_extract_word(s,c,i);
		i++;
		if (i + 1 == num_arr)
			break;
	}
	arr_tmp[i] = NULL;
	return (arr_tmp);
}