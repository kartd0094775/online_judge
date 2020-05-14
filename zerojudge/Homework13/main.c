#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f=1.0;
    int i;
    for(i=1;i<=10;i++)
    {
        f/=(float)i;

    }
    printf("%.18f\n", f);
    int n;
    char string[1000]={0};
    i=0;
    scanf("%d", &n);
    do
    {
        if(n%16<=9)
        string[i]=n%16+48;
        else
        string[i]=n%16+55;
        i++;
        n/=16;
    }
    while(n>0);
    for(i--;i>=0;i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
    int num;
    scanf("%d", &num);
    int j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i-1;j++)
        printf(" ");
        for(j=0;j<2*i-1;j++)
        {
            if((i%2==1&&j%2==0)||(i%2==0&&j%2==1))
            printf("O");
            else
            printf("X");
        }
        printf("\n");
    }
    char string1[10000];
    scanf("%s", string1);
    gets(string1);
    printf("%u", sizeof(string1));
    return 0;
}
