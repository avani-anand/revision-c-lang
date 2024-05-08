//WAP with a structure represting a complex number.

#include<stdio.h>

typedef struct complex
{
    /* data */
    int real;
    int complex;
}comp;


int main(){

comp cnums;

cnums.real=123;
cnums.complex=22;

printf("%d\n",cnums.real);
printf("%d\n",cnums.complex);

return 0 ;
}