#include<stdio.h>
#include<STRING.H>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
struct employee facebook[100];

facebook[0].code=100;
facebook[0].salary=12.32;
strcpy( facebook[0].name,"avani");


facebook[1].code=1000;
facebook[1].salary=167.7;
strcpy( facebook[1].name,"anand");


facebook[2].code=10000;
facebook[2].salary=133.32;
strcpy( facebook[2].name,"rohit");


// printf("\n %s",facebook->name);
// printf("\n %s",facebook->code);
// printf("\n %s",facebook[1].name);
return 0 ;
}