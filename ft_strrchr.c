#include <stdlib.h>

char	*ft_strrchr(char *str, int sym)
{
	int i;
	char *ptr;

	i = 0;
	if (str == NULL)
		return (NULL);
	if (sym == '\0')
	{
		while (*(str + i) == '\0')
			i++;
		return (str);
	}
	while (*(str + i))
		i++;
	while (i)
	{
		if (*(str + i) == (char)sym)
			return(++str);
		i--;
	}
	return (NULL);
}

