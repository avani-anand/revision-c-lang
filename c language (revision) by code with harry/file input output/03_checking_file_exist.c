#include<stdio.h>

int main(){
FILE *ptr;
int num;
int num2;

ptr =fopen("harry2.txt","r");

if (ptr== NULL)
{
   printf(" this file doest not exist \n");
}
else
{
   
fscanf(ptr,"%d",&num);
fscanf(ptr,"%d",&num2);
fclose(ptr); //we shuld close the file after using
printf("the value of num is : %d\n",num);
printf("the value of char is :%d\n",num2);
}


return 0 ;
}