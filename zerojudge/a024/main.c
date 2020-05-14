#include <stdio.h>
#include <stdlib.h>
int find_gcd(int, int);
int main()
{
    int x,y;
    while(scanf("%d%d", &x, &y)==2)
    {
        if(x>y)
        printf("%d\n", find_gcd(x,y));
        else
        printf("%d\n", find_gcd(y,x));
    }
    return 0;
}

int find_gcd(int x,int y)
{
    if (x>y)
    {
        if(x%y==0)
        return y;
        else
        return find_gcd(y,x%y);
    }

}
