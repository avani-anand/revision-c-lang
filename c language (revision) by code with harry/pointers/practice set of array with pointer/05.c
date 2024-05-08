

#include<stdio.h>

void positive(int * arr, int n){
  int COUNT;

  for (int i = 0; i < 7; i++)
{

    if (arr[i]<=0)
    {
         COUNT++;  //   =  count ++;
    }
    
}


printf("negative integers are %d",COUNT);



}

int main(){

    int arr[]={1,-2,3,4,-5,6,-7};
    positive(arr,7);


return 0;
}