#include<unistd.h>

int		input_valid(int argc, char **argv);

char	**make_grid(int argc, char **argv);

int		solve_sudoku(char **grid, int row, int col);

void	print_sudoku(char **grid);

int	main(int argc, char **argv)
{
	char	**grid;

	if (!input_valid(argc, argv))
	{
		write (1, "Error\n", 6);
		return (0);
	}
	else
		grid = make_grid(argc, argv);
	if (solve_sudoku(grid, 0, 0))
		print_sudoku(grid);
	else
		write (1, "Error\n", 6);
	return (0);
}
