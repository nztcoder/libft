#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			counter;
	unsigned char	*tmp_str;

	tmp_str = (unsigned char *) str;
	counter = 0;
	while (counter < n)
	{
		if (tmp_str[counter] == (unsigned char)c)
			return (tmp_str + counter);
		counter++;
	}
	return (NULL);
}
