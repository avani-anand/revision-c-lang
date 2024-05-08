//write a program to illustrate the use of arrow opreator -> in C.

#include<stdio.h>
#include<STRING.H>
#include<STRING.H>
struct employee
{
    int num;
};

int main(){

struct employee e1,e2;
struct employee *ptr;

ptr = &e2;

e1.num=34;
printf(" without using arrow opreator %d\n",e1.num);

// ptr-> strcpy(e2.name,"anand");
// ptr-> strcpy(e2.name,"anand");
ptr-> e2.num=23;
printf(" with using arrow opreator %s\n",e2.num);


return 0 ;
}