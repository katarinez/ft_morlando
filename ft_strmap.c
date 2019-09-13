#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	char	*s2;
	char	*res;

	res = ft_memalloc((size_t)ft_strlen((char*)s) + 1);
	if (!s || !res)
		return (NULL);
	s1 = (char*)s;
	s2 = res;
	while (*s1)
		*(s2++) = f(*(s1++));
	return (res);	
}
