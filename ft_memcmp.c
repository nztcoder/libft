#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	size_t			counter;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	counter = 0;
	if (n == 0)
		return (0);
	while (counter < n)
	{
		if (tmp_s1[counter] != tmp_s2[counter])
			return (tmp_s1[counter] - tmp_s2[counter]);
		counter++;
	}
	return (0);
}
