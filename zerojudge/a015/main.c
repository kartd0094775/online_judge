#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column,array[100][100];
    while(scanf("%d %d", &row, &column))
    {
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    }
    return 0;
}
