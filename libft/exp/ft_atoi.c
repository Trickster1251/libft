int		ft_atoi(char *str)
{
	int i;
	int m;
	int n;

	i = 0;
	m = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '\f' ||
			str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '-')
	{
		if (str[i] == '-' && str[i] == '+')
		str[i] *= -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * m);
}
