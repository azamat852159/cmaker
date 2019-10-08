int	ft_atoi(const char *str)
{
	int result;
	int sign;
	char c;

	result = 0;
	sign = 1;
	while(*str)
	{
		c = *(str++);
		if(c == '-')
			sign = -1;
		else if (c >= '0' && c <= '9')
			result = result * 10 + c - '0';
		else
			return (result * sign);
	}

	return (result * sign);
}
