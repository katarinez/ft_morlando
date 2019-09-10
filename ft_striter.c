void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (!s || !f)
		return (0);
	i = 0;
	while (*(s + i))
	{
		f(*(s + i));
		i++;
	}
}
  
