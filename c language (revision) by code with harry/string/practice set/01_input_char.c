//write a program to take string as input from the user using %c and %s. confirm that the strings are equal.

#include<stdio.h>
#include<STRING.H>

int main(){
char a[10];
char b[10];

char c;
int i=0;

printf("enter the value of first string \n:");
scanf("%s",a);
printf("enter the value of second character : \n");
fflush(stdin);     // here we added this function beacuse when we inputing the value after enter it takes  input value for second cahracter as null so we flushing the input 
// scanf("%c",b); wrong method we can't directly take value in %c we take in value using loop

while (c !='\n')  //jbtk user enter milte rhega tbtk next next ek ek char lete rhega double enter milte hi null mil jaega to input lena band kr dega 
{
    fflush(stdin); 
    scanf("%c", &c);
    b[i]=c;
    i++;
}
b[i-1]='\0'; // -1 isliye kyuki char enter krne time double \n se loop se bahar nikle the iska mtlb ek space char m hoga isliye usko remove krna h

printf("character first input is  %s \n",a);
printf("character second input is  %s \n",b);
return 0 ;
}