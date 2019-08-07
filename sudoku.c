#include "printf.h"
char	grid[9][9] = {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
};

char	rows[9][9] = {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
};
char	cols[9][9] = {
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
};
char	sqs[3][3][9] = {
        {
                {0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0},
        },
        {
                {0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0},
        },
        {
                {0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0},
                {0,0,0,0,0,0,0,0,0},
        }
};

void	printgrid(void)
{
    int	i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j == 8)
                printf("%c\n", grid[i][j] + '0');
            else
                printf("%c ", grid[i][j] + '0');
        }
    }
    printf("\n");
}
void	printrows(void)
{
    int	i, j;

    printf("rows:\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j == 8)
                printf("%c\n", rows[i][j] + '0');
            else
                printf("%c ",  rows[i][j] + '0');
        }
    }
    printf("\n");
}
void	printcols(void)
{
    int	i, j;

    printf("cols:\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (j == 8)
                printf("%c\n", cols[i][j] + '0');
            else
                printf("%c ", cols[i][j] + '0');
        }
    }
    printf("\n");
}

int	validn(int i, int j, int n)
{
    if (rows[i][n - 1] || cols[j][n - 1] || sqs[i / 3][j / 3][n - 1])
        return 0;
    return 1;
}
int    next(char *coords)
{
    int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (!grid[i][j]) {
                coords[0] = i;
                coords[1] = j;
                return 1;
            }
        }
    }
    return (0);
}
int	solve(int i, int j)
{
    int	n;
    char coords[2];

    /* return 1 if done */
    if (!next(coords))
        return (1);
    /* for numbers 1-9, check if number works */
    for (n = 1; n < 10; n++)
    {
        /* if number is valid */
        if (validn(i, j, n))
        {
            /* update tables */
            rows[i][n - 1] = 1;
            cols[j][n - 1] = 1;
            sqs[i / 3][j / 3][n - 1] = 1;
            /* try it; update board */
            grid[i][j] = n;
            /* get next cell */
            next(coords);
            /* print if solution */
            if (solve(coords[0], coords[1]))
                printgrid();
            /* reset the table values & grid values */
            rows[i][n - 1] = 0;
            cols[j][n - 1] = 0;
            sqs[i / 3][j / 3][n - 1] = 0;
            grid[i][j] = 0;
        }
    }
    return 0;
}

int    setupgrid(char *format)
{
    int i, j, f, n;

    f = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++, f++)
        {
            n = format[f] - '0';
            grid[i][j] = (n >= 1 && n <= 9) ? n : 0;
            if (n)
            {
                if (rows[i][n - 1] || cols[j][n - 1] || sqs[i / 3][j / 3][n - 1])
                        return (0);
                rows[i][n - 1] = 1;
                cols[j][n - 1] = 1;
                sqs[i / 3][j / 3][n - 1] = 1;
            }
        }
    }
    return (1);
}


int cspec_sudoku(char *format)
{
    char coords[2];

    if (!setupgrid(format)) {
        printf("Not a valid Sudoku\n");
        return (0);
    }
    next(coords);
    solve(coords[0], coords[1]);
    return (1);
}


