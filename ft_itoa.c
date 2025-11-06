#include "libft.h"

static size_t	ft_get_len(long n, int is_negative)
{
	size_t	len;
	long	tmp;

	len = is_negative;
	tmp = n;
	if (tmp == 0)
		return (len + 1);
	while (tmp > 0)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	size_t	len;
	char	*result;
	long	nb;

	nb = n;
	is_negative = 0;
	if (nb < 0)
	{
		nb = -nb;
		is_negative = 1;
	}
	len = ft_get_len(nb, is_negative);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (is_negative == 1)
		result[0] = '-';
	return (result);
}
