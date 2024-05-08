//typedef is use to give another name to struct so instead of writting" struct empolyee" every time we can write the alias name we give to struct

#include<stdio.h>
#include <STRING.H>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emp;  //here by using typedef function we give struct name as emp

void show (emp emp1){
    printf("the code of empolyee is : %d \n", emp1.code);
    printf("the salary of the empolyee is : %f\n", emp1.salary);
    printf("the name of the empolyee is : %s\n", emp1.name);
}


int main(){
    //declearing e1 and ptr
emp e1;        // we are using emp instead of "stuct employee"
emp *ptr;

//pointing ptr to e1
ptr=&e1;

//set the num values for e1
ptr->code=101;
ptr->salary=11.1;
strcpy(ptr->name,"harry");

show(e1);

return 0 ;
}