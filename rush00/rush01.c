int     ft_putchar(char c);
void    first_line(int width, int x);
void    last_line(int width, int x);
void    mid_line(int width, int x);

void    rush(int x, int y)
{
    int width;
    int length;

    if (x <= 0 || y <= 0)
        return ;
    length = 1;
    while (length <= y)
    {
        width = 1;
        while (width <= x)
        {
            if (length == 1)
                first_line(width, x);
            else if (length == y)
                last_line(width, x);
            else
                mid_line(width, x);
            width++;
        }
        ft_putchar('\n');
        length++;
    }
}

void    first_line(int width, int x)
{
    if (width == 1)
        ft_putchar('/');
    else if (width == x)
        ft_putchar('\\');
    else
        ft_putchar('*');
}

void    last_line(int width, int x)
{
    if (width == 1)
        ft_putchar('\\');
    else if (width == x)
        ft_putchar('/');
    else
        ft_putchar('*');
}

void    mid_line(int width, int x)
{
    if (width == 1)
        ft_putchar('*');
    else if (width == x)
        ft_putchar('*');
    else
        ft_putchar(' ');
}
