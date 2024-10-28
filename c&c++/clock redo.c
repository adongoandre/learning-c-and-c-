#include<stdio.h>
#include<Windows.h>

int main(){
    int d,h,m,s;
    int w = 1000;
    char t[2] = {'A','M'};
    char p[2] = {'P','M'};
    printf("enter the starting day and time in the format D:HH:MM:SS : ");
    scanf("%d%d%d%d",&d,&h,&m,&s);
    if (h>24||m>60||s>60){
        printf("error");
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
        if (h>24)
        {
            d++;
            h=0;
        }
        if (h<12){
            printf("\n\n\n\t\t\t\tthe time count begins.");
            printf("\n\n\n\t\tday : %d", d);
            printf("\n\t\tthe time is ==> %02d:%02d:%02d.%s",h,m,s,p);
            Sleep(w);
            system("cls");
        }
        else{
            printf("\n\n\n\t\t\t\tthe time count begins.");
            printf("\n\n\n\t\tday : %d", d);
            printf("\n\t\tthe time is ==> %02d:%02d:%02d.%s",h,m,s,p);
            Sleep(w);
            system("cls");
        }
        
    }
    
}