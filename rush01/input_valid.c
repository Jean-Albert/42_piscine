int	input_valid(int argc, char **argv)
{
	int	empt;
	int	c;
	int	r;

	if (argc != 10)
		return (0);
	empt = 0;
	c = 1;
	while (c < 10)
	{
		r = 0;
		while (argv[c][r])
		{
			if (argv[c][r] == '.')
				empt++;
			r++;
		}
		if (r != 9)
			return (0);
		c++;
	}
	if (empt == 0 || empt > 64)
		return (0);
	return (1);
}
