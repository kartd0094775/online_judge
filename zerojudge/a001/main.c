#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[10000];
    while(scanf("%s", string))
    {
        printf("hello, %s", string);
    }
    return 0;
}
