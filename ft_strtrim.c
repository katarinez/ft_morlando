#include <stdlib.h>

int		ft_lenof(char const *s)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (*(s + k))
	{
		if ((*(s + k) == ' ' || *(s + k) == '\t' || *(s + k) == '\n' || *(s + k) == ',') && (j == 1))
			i++;
		else if (*(s + k) == ' ' || *(s + k) == '\t' || *(s + k) == '\n' || *(s + k) == ',')
			j = 0;
		else 
		{
			i++;
			j = 1;
		}
		k++;
	}
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int	i;
	int	j;
	int	k;
	char	*str;

	i = ft_lenof(s);
	str = malloc(sizeof(*str) * (i + 1));
	i = 0;
	k = 0;
	j = i;
	while (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n' || *(s + i) == ',')
		i++;
	while (j)
	{
		*(str + k) = *(s + i);
		i++;
		k++;
		j--;
	}
	*(str + k) = '\0';
	return (str);
}
