#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkWin(); 
void drawBoard();

int main(){
    system("color 8F");
    int player = 1, i , choice;
    char mark; //X,O
    do{
        drawBoard();
        player = (player%2) ? 1:2;
        printf("\n\n\t\t\t\t\t   player %d, enter the choice : ", player);
        scanf("%d", &choice); 
        mark = (player == 1) ? 'X':'O';
        switch (choice)
        {
            case 1:
                square[1] = mark;
                break;
            case 2:
                square[2] = mark;
                break;
            case 3:
                square[3] = mark;
                break;
            case 4:
                square[4] = mark;
                break;
            case 5:
                square[5] = mark;
                break;
            case 6:
                square[6] = mark;
                break;
            case 7:
                square[7] = mark;
                break;
            case 8:
                square[8] = mark;
                break;
            case 9:
                square[9] = mark;
                break;
            default:
                printf("invalid option");
                player--;
                getch();
                break;
        }
        i = checkWin();
        player++;
    }
    while(i==-1);

    drawBoard();
    if (i ==1)
    {
         printf("\n\n\t\t\t\t\t\t  ==>Player %d won",--player);
    }else
    {
        printf("\n\n\t\t\t\t\t\t  ==> Game draw");
        getch();
        return 0; 
    }
}

int checkWin()
{
    if (square[1]==square[2]&& square[2]==square[3])
        return 1;
    else if (square[4]==square[5]&& square[5]==square[6])
        return 1;
    else if (square[7]==square[8]&& square[8]==square[9])
        return 1;
    else if (square[1]==square[4]&& square[4]==square[7])
        return 1;
    else if (square[2]==square[5]&& square[5]==square[8])
        return 1;
    else if (square[3]==square[6]&& square[6]==square[9])
        return 1;
    else if (square[1]==square[5]&& square[5]==square[9])
        return 1;
    else if (square[3]==square[5]&& square[5]==square[7])
        return 1;
    else if (square[1]!='1'&& square[2]!='2'&& square[3]!='3'&& square[4]!='4'&& square[5]!='5'&& square[6]!='6'&& square[7]!='7'&& square[8]!='8'&& square[9]!='9')
        return 0;
    else
        return -1;
    
}

void drawBoard()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t    Tic Tac Toe \n\n");
    printf("\t\t\t\t\t     player1 (X) - player2 (O)\n\n\n");
    printf("\t\t\t\t\t\t___________________\n");
    printf("\t\t\t\t\t\t|     |     |     |\n");
    printf("\t\t\t\t\t\t|  %c  |  %c  |  %c  |\n",square[1],square[2],square[3]);
    printf("\t\t\t\t\t\t|_____|_____|_____|\n");
    printf("\t\t\t\t\t\t|     |     |     |\n");
    printf("\t\t\t\t\t\t|  %c  |  %c  |  %c  |\n",square[4],square[5],square[6]);
    printf("\t\t\t\t\t\t|_____|_____|_____|\n");
    printf("\t\t\t\t\t\t|     |     |     |\n");
    printf("\t\t\t\t\t\t|  %c  |  %c  |  %c  |\n",square[7],square[8],square[9]);
    printf("\t\t\t\t\t\t|_____|_____|_____|\n");
}