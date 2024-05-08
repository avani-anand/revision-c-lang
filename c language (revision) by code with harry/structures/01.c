#include<STDIO.H>
#include <STRING.H>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main(){

struct employee e1;
e1.code=100;
e1.salary=34.3345;
// e1.name="avani"; //we can not add char in struct as like we should use strcpy() function to enter any character in struct
strcpy(e1.name,"avani");

printf("printing the values of struct one by one \n");
printf("%d \n", e1.code);
printf("%f \n",e1.salary);
printf("%s \n",e1.name);



return 0 ;
}