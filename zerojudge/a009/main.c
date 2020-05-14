#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[1000000];
    while(scanf("%s", string)==1)
    {
        int i;
        for(i=0;i<1000000;i++)
        {
            if(string[i]=='\0')
            break;
            printf("%c", string[i]-7);

        }
        printf("\n");
    }

    return 0;
}
