#include<stdio.h>
#include<STRING.H>
struct employee
{
    int code;
    float salary;
    char name[20];
};

void show (struct employee emp){
    printf("the code of employee is :%d \n",emp.code);
    printf("the salary of employee is :%f \n",emp.salary);
    printf("the name of employee is :%s \n",emp.name);
}

int main(){
        //declearing e1 and ptr

struct employee e1;
struct employee *ptr;

//pointing ptr to e1

ptr= &e1;

//set the num values for e1

ptr->code=101;
ptr->salary=11.01;
strcpy(ptr->name,"harry");


show(e1);
printf("the code of employee is: %d \n",e1.code);
return 0 ;
}