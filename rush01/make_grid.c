#include <stdlib.h>

char	*ft_strdup(char *src);

char	**make_grid(int argc, char **argv)
{
	int		i;
	char	**grid;

	i = 0;
	grid = malloc(sizeof(char) * 9);
	while (i < argc - 1)
	{
		grid[i] = ft_strdup(argv[i + 1]);
		i++;
	}
	return (grid);
}
