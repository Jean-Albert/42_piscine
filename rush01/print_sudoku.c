#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sudoku(char **grid)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 9)
	{
		while (col < 9)
		{
			ft_putchar(grid[row][col]);
			ft_putchar(' ');
			col++;
		}
		col = 0;
		ft_putchar('\n');
		row++;
	}
}
