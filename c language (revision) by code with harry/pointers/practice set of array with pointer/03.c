//  repeate the same code question 3 as general input from user

#include<stdio.h>

int main(){

int mul[10];
int a;

printf("enter num you want table of  ");
scanf("%d", &a);

for (int i = 0; i < 10; i++)
{
    mul[i]= a*(i+1);

}

for (int i = 0; i < 10; i++)
{
    printf("%d * %d = %d \n", a,+1, mul[i]);
}

return 0 ;
}