#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, counter;
    char a[1000], b[1000], temp;
    FILE *fp_r = fopen("test1.txt", "r");
    if (fp_r == NULL)
    {
        printf("Can't read the file!");
        return -1;
    }
    else
    {
        fscanf(fp_r, "%s", b);
        while(!feof(fp_r))
            {
                fscanf(fp_r, "%s", a);
                strcat(b, a);

            }
            printf("%s\n", b);
            counter = 0;
            temp = b[0];
            for(i=0;i<strlen(b);i++)
            {
                if(temp == b[i])
                counter++;
                else
                {
                    printf ("%d%c", counter, temp);
                    temp = b[i];
                    counter = 1;
                }
            }
            printf ("%d%c", counter, temp);

    }

    fclose(fp_r);
    return 0;
}
