#include <stdio.h>
#include <windows.h>

int main()
{
    int d, h, m, s;
    int w=1000;
    start:
    printf("please enter a time format in DD: HH: MM: SS \n");
    scanf("%d%d%d%d", &d, &h, &m, &s);
    if (h>24 ||m>60 ||s>60)
    {
        printf("ERROR! \n");
        goto start;
    }
    while (1)
    {
        s++;
        if (s>59)
        {
            m++;
            s=0;
        }
        if (m>59)
        {
            h++;
            m=0;
        }
        if (h>23)
        {
            d++;
            h=0;
        }
        printf("\n Clock : Day %d",d);
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(w);

        system("cls");

    }

}