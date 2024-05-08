//WAp containing a function which reverses the array passed in it;

#include<stdio.h>

void reverse(int * arr, int n){
   int temp;
   
   for (int i = 0; i < (n/2); i++)  //(n/2)  because array reversed on half of the array size and if we dont stop on half of the array then it reverse the reversed array and we got the same output without reversing 
   {
    temp= arr[i];
    arr[i]= arr[n-i-1];
    arr[n-i-1]= temp;
   }
   
  }
int main(){

    int arr[]={1,2,3,4,5,6,7};

printf("array before(without reversing)----------------\n");
for (int i = 0; i < 7; i++)
{

    printf("the value of %d element is : %d \n", i,arr[i]);
}
printf("array after( reversing)------------------------\n");

    reverse(arr,7);


for (int i = 0; i < 7; i++)
{
    printf("the value of %d element is : %d \n", i,arr[i]);
}


return 0 ;
}