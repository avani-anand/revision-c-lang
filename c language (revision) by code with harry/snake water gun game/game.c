#include<stdio.h>

    int SnakeWaterGun(char you ,char comp)
    {
        //returns 1 if you win, -1 if you loose and 0 if draw

        //condition for  draw match
        if (you == comp)
        {
            return 0;
        }
        //condition for not draw
        if (you =='s' && comp=='w')
        {
            return 1;
        }
        else if (you =='w' && comp=='s')
        {
            return -1;
        }
       
        if (you =='s' && comp=='g')
        {
            return -1;
        }
        else if (you =='g' && comp=='s')
        {
            return 1;
        }
        // if (you =='w' && comp=='s')
        // {
        //     return 1;
        // }
        // else if (you =='s' && comp=='w')
        // {
        //     return -1;
        // }
        if (you =='g' && comp=='w')
        {
            return -1;
        }
        else if (you =='w' && comp=='g')
        {
            return 1;
        }
       
        
    }
int main(){

char you , comp;
printf(" Enter G for GUN , S for SNAKE  and W for WATER ");
scanf("%s",&you);
int result= SnakeWaterGun(you, comp);

printf("you choose %c and computer choose %c.", you,comp);

if (result ==0)
{
    printf("game draw \n");
}
else if (result == 1)
{
    printf("you win the game ! \n");
}
else
{
   printf("you loose \n");
}

return 0 ;
}