#include <stdlib.h>

void	*memchr (const void *arr, int c, size_t n)
{
	const char	*ar;
	int		i;

	ar = (const char*)arr;
	i = 0;
	while (i < n)
	{
		if (*(ar++) == (char)c)
			return ((void*)--ar);
		i++;
	}
	return (NULL);
}
