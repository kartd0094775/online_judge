#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ID[11];
    while(scanf("%s", ID)==1)
    {
        int i;
        int sum=0;
        switch(ID[0])
            case 'A':sum+=1;
                     break;
            case 'B':sum+=10;
                     break;
            case 'C':sum+=19;break;
            case 'D':sum+=28;break;
            case 'E':sum+=37;break;
            case 'F':sum+=46;break;
            case 'G':sum+=55;break;
            case 'H':sum+=64;break;
            case 'I':sum+=73;break;
            case 'J':sum+=82;break;
            case 'K':sum+=2;break;
            case 'L':sum+=11;break;
            case 'M':sum+=20;break;
            case 'N':sum+=29;break;
            case 'O':sum+=38;break;
            case 'P':sum+=47;break;
            case 'Q':sum+=56;break;
            case 'R':sum+=65;break;
            case 'S':sum+=74;break;
            case 'T':sum+=83;break;
            case 'U':sum+=3;break;
            case 'V':sum+=12;break;
            case 'W':sum+=21;break;
            case 'X':sum+=30;break;
            case 'Y':sum+=39;break;
            case 'Z':sum+=48;break;

        }

    }

    return 0;
}
