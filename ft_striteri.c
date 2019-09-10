void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	char	*c;

	if (!s || !*s || !f)
		return (0);
	i = 0;
	while (*(s + i))
	{
		f(i, *(s + i));
		i++;
	}
}
