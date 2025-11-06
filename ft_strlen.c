#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	counter;

	counter = 0;
	while (c[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
