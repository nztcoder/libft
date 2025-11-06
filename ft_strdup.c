#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy_of_str;
	size_t	counter;

	counter = 0;
	copy_of_str = malloc(ft_strlen(str) + 1);
	if (copy_of_str == NULL)
		return (NULL);
	while (str[counter])
	{
		copy_of_str[counter] = str[counter];
		counter++;
	}
	copy_of_str[counter] = '\0';
	return (copy_of_str);
}
