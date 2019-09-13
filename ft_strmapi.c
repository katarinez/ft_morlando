#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*res;

	i = 0;
	result = ft_memalloc((size_t)ft_strlen((char*)s) + 1);
	if (!s || !res)
		return (NULL);
	while (*(s + i))
	{
		*(res + i) = f(i, *(s + i));
		i++;
	}
	return (result);
}
