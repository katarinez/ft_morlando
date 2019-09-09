#include <string.h>
#include <stddef.h>

char	*ft_strnstr(char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;
	int	stop;
	char	c;

	i = 0;
	c = *(str2 + len);
	while (*(str1 + i))
	{
		j = 0;
		stop = i + 1;
		if ((*(str1 + i) == *(str2 + j)) && (j <= len))
		{
			while ((*(str1 + i) == *(str2 + j)) && (j <= len))
			{
				i++;
				j++;
			}
			if (*(str2 + i) == c || *(str2 + i) == '\0')
				return (str1);
		}
		i = stop;
	}
	return (NULL);	
}

