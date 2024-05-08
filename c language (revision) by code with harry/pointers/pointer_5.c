//WAP using a function which calculates the sum and average of two numbers .use pointers and print the value of sum and average in main()
#include<stdio.h>

void SumAverage( int a, int b ,int *sum , float *avg){
     *sum= a + b;
    *avg = (float)(* sum)/2;

}

int main(){

int x=3 , y=9, sum;
float avg;

SumAverage(x,y , &sum ,&avg);

printf("the value of sum is %d \n", sum);
printf("the value of avg is %f \n", avg);

return 0 ;
}