//here we write seprate code a random num program for random num ber game

#include<STDIO.H>
#include<STDLIB.H>
#include<TIME.H>


int main(){
int number;

srand(time(0));
number = rand()%50+1;     //gnereates random number between 1 to 50
printf("the number is %d", number);

return 0 ;
}