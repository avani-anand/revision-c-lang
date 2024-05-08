#include<stdio.h>

//we can also make pointer to pointer  which point another pointer like third varibale by  int **


int main(){
int i=8;
int * j;
j=&i;

printf(" address i = %u \n", &i);
printf(" address i = %u \n", j);
printf(" address j = %u \n", &j);
printf(" value of i = %d \n", i);
printf(" value of i = %d \n", *(&i));
printf(" value of i = %d \n", *j);
return 0 ;
}