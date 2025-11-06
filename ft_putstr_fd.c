#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	counter;

	counter = 0;
	if (!s)
		return ;
	while (s[counter] != '\0')
	{
		write(fd, &s[counter], 1);
		counter++;
	}
}
