// write your own version of strlen function from <string.h>

#include<stdio.h>

int length(char *string){
    char *ptr = string;
    int len=0;

    while (*ptr!='\0')
    {
       len++;
       ptr++;
    }
    return len;
}

int main(){

char string[]="harry";

int l = length(string);
printf("the length of the string is %d", l);

return 0 ;
}