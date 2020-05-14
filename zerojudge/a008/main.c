#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char chinese(char num)
{
    switch(num)
    {

        case'1':printf("³ü");
                break;
        case'2':printf("¶L");
                break;
        case'3':printf("°Ñ");
                break;
        case'4':printf("¸v");
                break;
        case'5':printf("¥î");
                break;
        case'6':printf("³°");
                break;
        case'7':printf("¬m");
                break;
        case'8':printf("®Ã");
                break;
        case'9':printf("¨h");
                break;
    }


}
int main()
{
    char num[21474];
    scanf("%s", num);

    switch(strlen(num))
    {
    case'1':chinese(num[0]);
            break;
    case'2'chinese(num[0])
            printf("")



    }




    return 0;
}
