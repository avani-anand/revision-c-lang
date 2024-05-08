//WAP to store the deatils of 3 empolyees from user defined data .
#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main(){

struct employee e1,e2,e3;
printf("enter the code of first employee \n");
scanf("%d", &e1.code);
printf("enter the salary of first employee \n");
scanf("%f",&e1.salary);
printf("enter the name of the first employee \n");
scanf("%s",e1.name);

printf("enter the code of second employee \n");
scanf("%d",&e2.code);
printf("enter the salary of second employee \n");
scanf("%f",&e2.salary);
printf("enter the name of the second employee \n");
scanf("%s",e2.name);

printf("enter the code of third employee \n");
scanf("%d",&e3.code);
printf("enter the salary of third employee \n");
scanf("%f",&e3.salary);
printf("enter the name of the third employee \n");
scanf("%s",e3.name);



return 0 ;
}