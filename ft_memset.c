#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)str)[counter] = (unsigned char)c;
		counter++;
	}
	return (str);
}
