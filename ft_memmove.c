#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			counter;

	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	counter = 0;
	if (tmp_dest == tmp_src)
		return (tmp_dest);
	if (tmp_dest < tmp_src)
	{
		while (counter < n)
		{
			tmp_dest[counter] = tmp_src[counter];
			counter++;
		}
	}
	else
	{
		while (n--)
		{
			tmp_dest[n] = tmp_src[n];
		}
	}
	return (tmp_dest);
}
