// create an array of size 3*10 containing multiplication tables of the numbers 2,7,9 respectively

#include<stdio.h>

void printTable(int *mulTable, int num , int n){
  for (int i = 0; i < n; i++)
  {
    mulTable[i]=num*(i+1);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d * %d =%d\n",num,i+1,mulTable[i]);
  }
  printf("****************************\n\n");
}

int main(){

int mulTable[3][10];
printTable(mulTable[0],2,10);
printTable(mulTable[1],7,10);
printTable(mulTable[2],9,10);

return 0 ;
}