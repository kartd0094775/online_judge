#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        int i;
        int array1[n];
        for(i=0;i<n;i++)
        {
            scanf("%d", &array1[i]);
        }
        int array2[3]={0};

        for(i=0;i<n;i++)
        {
            if(array1[i]%3==0)
            array2[0]+=1;
            else if (array1[i]%3==1)
            array2[1]+=1;
            else
            array2[2]+=1;
        }
        printf("%d %d %d\n", array2[0], array2[1], array2[2]);

    }
    return 0;
}
