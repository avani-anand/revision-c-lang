//Write a function slice() to slice a string. it should change the original string such that it is now the sliced string take "m" and "n" as the start and ending position for slice.

#include<stdio.h>

void slice(char *st,int m ,int n){
    int i=0;
     while ((m+i)<n)
     {
        st[i]=st[i+m];
        i++;
     }
     st[i]='\0';
}


int main(){
char st[]="harrayavani";
slice(st,1,8);
printf("%s",st);
return 0 ;
}