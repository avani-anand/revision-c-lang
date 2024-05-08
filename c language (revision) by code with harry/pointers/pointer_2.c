// WAP to print the address of a variable.use this address to get the value of this variable

#include<stdio.h>

int main(){

int i=8;


printf("address of i is %u \n" ,&i);
printf("value of i is %d \n" ,*(&i));


// // or  we can also store &i in another variable ptr then print it likke this

// int * ptr;
// ptr =&i;
// printf("value of i is %d \n" ,*ptr);


return 0 ;
}