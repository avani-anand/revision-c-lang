#include<stdio.h>
struct empolyee
{
    int code;
    float salary;
    char name;
};


int main(){

struct empolyee e1;
struct empolyee *ptr;


ptr = & e1;
// (*ptr).code=101;
ptr->code=101;           // we can also write as
printf("%d",e1.code);


return 0 ;
}