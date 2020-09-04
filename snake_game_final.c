#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include<unistd.h>
void gotoxy(short ,short ) ;
void welcome(void);
int i ,j ;

struct coorainate
{
   int x ; int y ; char d ;
} ;

typedef struct  coordinate  dir ;


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
       {gotoxy(30+i,50 + j); printf("*"); sleep(0.42 ); }
      printf("\n") ;
    // gotoxy(31,5);printf("*");
     //gotoxy(32,5);printf("*");
     //gotoxy(33,5);printf("*");


}  
