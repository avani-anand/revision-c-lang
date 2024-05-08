// WAP to print the value of a variable i by using "pointer to pointer "type variable

#include<stdio.h>

int main(){
int i =2;
 int * ptr;
 int ** ptr2;


 ptr = &i;
 ptr2 = &ptr;

 printf("value of i %d \n", **ptr2);

return 0 ;
}