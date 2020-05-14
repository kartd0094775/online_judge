#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    while (scanf("%d", &n))
    {
        int i;
        int a,b;
        for(i=0;i<n;i++)
        {
            int j,sum=0;
            scanf("%d%d", &a, &b);
            for (j=sqrt(a);j<=sqrt(b);j++)
            {
                if(j*j==a)
                sum+=(j*j);

            }
            printf("Case %d: %d\n", i+1, sum);
        }

    }
    return 0;
}
