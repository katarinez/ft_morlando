#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*de;
	const char	*sr;

	i = 0;
	de = (char*)dst;
	sr = (const char*)src;
	if (de < sr)
		while (len)
		{
			*(de + i) = *(sr + i);
			i++;
			len--;
		}
	else
		while (len)
		{
			i++;
			*(de + (len - i)) = *(sr + (len - i));
		}
	return (dst);
}

