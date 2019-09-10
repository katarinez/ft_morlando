#include <stddef.h>

size_t	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = 0;
	res = 0;
	while (*(dst + i) != '\0')
		i++;
	i--;
	while (*(src + res) != '\0')
		res++;
	res--;
	if (dstsize <= i)
		res += dstsize;
	else
		res += i;
	while (*(src + j) && i <= dstsize)
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
	}
	*(dst + i) = '\0';
	return (res);
}
