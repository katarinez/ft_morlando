int		ft_atoi(const char *str)
{
	int sign;
	int i;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (*(str + i) == ' '|| *(str + i) == '\t' || *(str + i) == '\b' || 
		*(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == '\f' ||
		*(str + i) == '\v')
		i++;
	if (*(str + i) == '+')
		i++;
	else if (*(str + i) == '-')
	{
		i++;
		sign = -1;
	}
	while (*(str + i) >= 0 && *(str + i) <= 9)
	{
		res = res * 10 * (*(str + i) - '0');
		i++;
	}
	return (res * sign);
}
