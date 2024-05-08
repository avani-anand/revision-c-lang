

#include<STDIO.H>
#include<STRING.H>

int main(){
    char *str= "this";

    char str2[10];
    strcpy(str2,str);
    printf("now the  str2 is %s",str2);
}