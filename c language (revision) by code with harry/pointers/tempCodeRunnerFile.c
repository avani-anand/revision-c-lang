#include<stdio.h>


void printArra( int ptr[], int n) // we can also write as
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d\n", i+1, ptr[i]);   
    }
    ptr[2]= 5555555;  //this value will be chages in arr array of main as well because it is given by its address 
}

int main(){
 int arr[]={1,23,34,23,55,54,643,7};
 printArra(arr,8); 
 printf("%d", arr[2]); 
 printArra(arr,8); 

return 0 ;
}