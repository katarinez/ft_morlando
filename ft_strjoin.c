char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	size;

	if (s1 && s2)
		size = (size_t)(ft_strlen((char*)s1) + ft_strlen((char*)s2));
	if (s1 && !s2)
		size = (size_t)(ft_strlen((char*)s1));
	if (s2 && !s1)
		size = (size_t)(ft_strlen((char*)s2));
	if (!s1 && !s2)
		return (NULL);
	res = ft_memalloc(size);
	if (s1)
		res = ft_strcpy(res, (char*)s1);
	else
		res = ft_strcpy(res, (char*)s2);
	if (s1 && s2)
		res = ft_strcat(res, (char*)s2);
	return (res);
}
