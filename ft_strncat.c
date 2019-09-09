#include <stddef.h>

char	*ft_strncat(char *dest, const char *app, size_t n)
{
	size_t len;
	size_t i;
	size_t j;

	len = ft_strlen(dest);
	i = len + 1;
	j = 0;
	while (*(app + j) && (i != len + n))
	{
		*(dest + i) = *(app + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
