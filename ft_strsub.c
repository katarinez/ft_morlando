#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s || !(res = ft_memalloc(len + 1)))
		return (NULL);
	result = ft_strncpy(res, (char*)s + start, len);
	return (res);
}
