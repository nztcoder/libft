#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_counter;
	size_t	j_counter;

	i_counter = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i_counter < len && big[i_counter] != '\0')
	{
		j_counter = 0;
		while ((i_counter + j_counter) < len
			&& little[j_counter] != '\0'
			&& big[i_counter + j_counter] == little[j_counter])
		{
			j_counter++;
		}
		if (little[j_counter] == '\0')
			return ((char *)big + i_counter);
		i_counter++;
	}
	return (NULL);
}
