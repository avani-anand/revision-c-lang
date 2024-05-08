#include<stdio.h>

int main(){
FILE *ptr;
// ptr= fopen("fgetc.txt","r");


// //these all read one by one character from fgetc.c file and print
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));
// printf("the value of my character is %c\n",fgetc(ptr));


//it create a new file putdemo.c and write avni char by char in putdemo.c file
ptr=fopen("putdemo.txt","w");
putc('a',ptr);
putc('v',ptr);
putc('n',ptr);
putc('i',ptr);

fclose(ptr);
return 0 ;
}