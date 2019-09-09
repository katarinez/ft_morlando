#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *ss1;
	const char *ss2;

	ss1 = (const char*)s1;
	ss2 = (const char*)s2;
	while ((*ss1 || *ss2) && (n))
	{
		if (*ss1 != *ss2)
			return (*ss1 - *ss2);
		ss1++;
		ss2++;
		n--;
	}
	return ((int)(*ss1 - *ss2));
}
