#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sudoku[9][9];
    while(1)
    {
        int i,j;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                scanf("%d", &sudoku[i][j]);
            }
        }
        int test=0;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                test+=sudoku[i][j];
            }
            if (test!=45)
        }
    }

    return 0;
}
