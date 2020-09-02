#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<direct.h>
void gotoxy(short ,short ) ;
void welcome(void);
int i ,j ;

int main(int argc , char *argv[])
{
   system("cls") ;
   getchar();
welcome();
getchar();
gotoxy(20 ,20) ;
printf("WELCOME TO SNAKE ") ;



system("cls");
getchar();
return 0;


}

void gotoxy(short  x , short y)
{
 COORD pos ;
pos.X = x ;
pos.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
   //printf("%c[%d;%d" ,0x1B ,y,x);
}

void welcome (void)
{
  for(j=0 ;j<30 ;j++)
    for(i=0;i<80 ;i++)
    {   
      (i<41)?system("color 0A"):system("color 01");
        gotoxy(30+i,5+j);
        printf("*"); 
    }
       printf("\n") ;
    // gotoxy(31,5);printf("*");
     //gotoxy(32,5);printf("*");
     //gotoxy(33,5);printf("*");


}  