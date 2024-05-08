#include<stdio.h>

int main(){
FILE *ptr;
int num =45557;
ptr =fopen("generated.txt","w");
fprintf(ptr ,"the num is %d",num);
fclose(ptr);
return 0 ;
}