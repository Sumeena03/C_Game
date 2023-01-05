#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int stonepaperscisor( char you, char comp)
{
    if(you==comp)
    {
        return 1;
    }

    if( you=='s' && comp=='p')
    {
return 1;
    }
    else if ( you=='p' && comp=='s')
    {
        return -1;
    }

    
    if( you=='t' && comp=='p')
    {
return 1;
    }
    else if ( you=='p' && comp=='t')
    {
        return -1;
    }

    
    if( you=='t' && comp=='s')
    {
return -1;
    }
    else if ( you=='s' && comp=='t')
    {
        return 1;
    }


}
int main(){
    char you, comp;
    int result,number;

    srand(time(0));
    number= rand()%100+1;
    if( number<33){
        comp='s';
    }

    else if(number>33 && number<66)
    {
        comp='p';
    }

    else if(number>66)
    {
        comp='t';
    }
    printf(" Enter 's' for stone, 'p' for paper\n, 't' for sccissor \n");
    scanf("%c",&you);

    result= stonepaperscisor(you, comp);

    if(result==1){
        printf(" You have won the game");
    }

    else if (result==0){
        printf("Game is drawn\n");
    }

    else if ( result == -1){
        printf(" You lose try later\n");

    }
    printf(" Your choice is %c and the computer choice is %c",you,comp);


     return 0;
}