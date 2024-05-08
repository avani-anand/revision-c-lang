#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};



int main(){

struct employee harry={100,32.23,"harry"};

printf("code is : %d \n", harry.code);
printf("salary is : %f \n", harry.salary);
printf("name is : %s \n", harry.name);
return 0 ;
}