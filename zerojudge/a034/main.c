#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while(scanf("%d", &num))
    {
        int array[100000];
        int i=-1,temp=num;
        while(temp!=0)
        {
            i++;
            if(temp%2==0)
            array[i]=0;
            else
            array[i]=1;
            temp/=2;
        }
        if(num>0)
        {
            while(i>=0)
            {
            printf("%d", array[i]);
            i--;
            }
        }
        else
        printf("0");
        printf("\n");
    }

    return 0;
}
