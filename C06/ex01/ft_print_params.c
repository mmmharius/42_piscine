
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	(void)argc;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
