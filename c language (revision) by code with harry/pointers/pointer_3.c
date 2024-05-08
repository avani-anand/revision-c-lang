// 2.   WAP having a variable i.print the address of i.  pass this variable to a function and print its address. Are these address same ? why?


#include<stdio.h>

void add(int a)
{
    printf("address of i in function %u \n",&a);
}

int main(){

int i=8;


printf("address of i is %u \n" ,&i);
add(i);


return 0 ;
}


//solution - here we see that there addresses is not same this is why because we are passing here i by its value
// and when we  pass by value then its copy goes to function where i value is same in function also but as it goes as copy so in function it
// also store in another address