// WAP to  take string encrpyt the string  by adding 1 so no one can understand what is that string in output 

#include<stdio.h>

void encrypt(char *c){
    char *ptr =c;
    while (*ptr != '\0')
    {
       *ptr=*ptr+1;
       ptr++;
    }
    

}

int main(){
    char c[]="avni";
    encrypt(c);
    printf("encrypted sting is : %s", c);

return 0 ;
}