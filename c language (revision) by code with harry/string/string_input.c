#include<stdio.h>

int main(){
char s[34];
printf("enter your name ");
scanf("%s",s);  //scanf can not the input with space beacuse it get stop on space as he think that the space means that null char to end and it stop taking input when we input space in string
printf("your name is %s", s);

return 0 ;
}