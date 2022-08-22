#include <unistd.h>

int	check_row(char **table, int row, char num)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (table[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	check_col(char **table, int col, char num)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (table[i][col] == num)
			return (1);
		i++;
	}
	return (0);
}

int	check_box(char **table, int row, int col, char num)
{
	int	x;
	int	y;

	x = 0;
	while (x < 3)
	{
		y = 0;
		while (y < 3)
		{
			if (table[x + row][y + col] == num)
				return (1);
			y++;
		}
		x++;
	}
	return (0);
}

int	check_legal(char **table, int row, int col, char num)
{
	if (!check_row(table, row, num)
		&& !check_col(table, col, num)
		&& !check_box(table, row - (row % 3), col - (col % 3), num))
		return (1);
	return (0);
}
