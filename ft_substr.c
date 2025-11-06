#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res_str;
	size_t	counter;
	size_t	len_s;

	counter = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	res_str = malloc(len + 1);
	if (res_str == NULL)
		return (NULL);
	while (counter < len)
	{
		res_str[counter] = s[start];
		counter++;
		start++;
	}
	res_str[counter] = '\0';
	return (res_str);
}
