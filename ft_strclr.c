void	ft_strclr(char *s)
{
	int i;

	i = 0;
	while (s && *(s + i))
	{
		*(s + i) = '\0';
		i++;
	}
}
