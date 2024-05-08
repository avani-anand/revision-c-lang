#include<stdio.h>

int main(){
char str[]= "harry";
// char str[] ={'h','a','r','r','y','\0'};

char *ptr = str;

while (*ptr != '\0')
{
    printf("%c \n",*ptr);
    ptr++;
}


return 0 ;
}