//  A pointer can increment decrement the value of address and point to the next memory loction of that type

// increase the address by 4 because int have 4 bytes storage in my airthmetic of cpu
#include<stdio.h>

int main(){

int i = 33;
int * ptr= &i;
printf(" the value of ptr is %u  \n", ptr);

ptr++;
printf(" now the value of ptr after increment is % u \n", ptr);
 ptr--;
printf(" now the value of ptr after decrement is % u \n", ptr);

return 0 ;
}