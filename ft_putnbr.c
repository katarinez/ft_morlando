int		ft_pow(int i)
{
	int n;
	int res;

	n = 10;
	res = 1;
	i--;
	while (i)
	{
		res *= n;
		i--;
	}
	return (res);
}
		

void	ft_putnbr(int n)
{
	int i;
	int nb;

	if (n < 0)
		ft_putchar('-');
	n = (n > 0) ? n : -n;
	nb = n;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	while (i)
	{
		nb = n;
		nb /= ft_pow(i);
		ft_putchar(nb + '0');
		n -= nb * ft_pow(i);
		i--;
	}
}
