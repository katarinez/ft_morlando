#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;

	str = malloc(size + 1);
	if (str)
	{
		ft_memset(str, '\0', size);
		return (str);
	}
	return (NULL);
}
