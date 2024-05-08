#include<stdio.h>

int main(){
    //both string declerations are valid 
char str[] ={'h','a','r','r','y','\0'};
char stri[]="harry";
printf("%s\n", stri);
printf("%s\n", str);
return 0 ;
}