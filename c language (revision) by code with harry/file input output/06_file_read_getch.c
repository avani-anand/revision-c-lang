// EOF - end of __FILE

#include<stdio.h>

int main(){
FILE *ptr;
char c;
ptr = fopen("fgetc.txt","r");
c= fgetc(ptr);
while (c!= EOF)  //will wite all the charcter from the file until  end of file
{
   printf("%c",c);
   c=fgetc(ptr);
}

return 0 ;
}