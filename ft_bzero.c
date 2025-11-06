#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)str)[counter] = 0;
		counter++;
	}
}
