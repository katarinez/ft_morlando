#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int	nb;

	i = 0;
	nb = (n > 0) ?  n : -n;
	while (nb > 0)
	{
		nb/=10;
		i++;
	}
	(n > 0) ? i : i++;
	str = malloc(sizeof(*str) * i + 1);
	nb = n;
	nb = (n > 0) ? n : -n;
	*(str + i) = '\0';
	i--;
	while (nb > 0)
	{
		*(str + i) = (nb/10 + '0');
		i--;
	}
	if (i == 0)
		*(str + i) = '-';
	return (str);
}
