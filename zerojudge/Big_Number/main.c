#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[1000000];
    int number=0;
    gets(string);
    int i;
    for(i=0;i<strlen(string);i++)
    {
        number=number*10+string[i]-'0';
    }
    printf("%d\n", number);

    return 0;
}
