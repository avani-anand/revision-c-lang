#include<stdio.h>

int main(){
char *ptr="avani";    //we can change its value in future because it is initlized by address

// char ptr[]="avani" ;  //we can NOT change its value in future because it is initlized by ARRAY

ptr = "ravan";
printf("%s",ptr);
return 0 ;
}