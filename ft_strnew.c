#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;

	if (str = malloc(size + 1))
	{
		ft_memset(str, '\0', size);
		return (str);
	}
	return (NULL);
}
