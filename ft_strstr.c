#include <stddef.h>
#include <stdlib.h>

char	*ft_strstr(char *str1, const char *str2)
{
	int i;
	int j;
	int stop;

	i = 0;
	while (*(str1 + i))
	{
		j = 0;
		stop = i + 1;
		if (*(str1 + i) == *(str2 + j))
		{
			while (*(str1 + i) == *(str2 + j))
			{
				i++;
				j++;
			}
			if (*(str2 + i) == '\0')
				return (str1);
		}
		i = stop;
	}
	return (NULL);	
}
