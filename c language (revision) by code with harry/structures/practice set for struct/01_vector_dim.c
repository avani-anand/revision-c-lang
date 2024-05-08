//create a two dimensional vector using structures in c

#include<stdio.h>

struct vector
{
    int x;
    int y;
};


int main(){
struct vector v1,v2;
v1.x=23;
v1.y=234;
printf("x dim is %d and y dim is %d\n",v1.x ,v1.y);

v2.x=123;
v2.y=2341;
printf("x dim is %d and y dim is %d\n",v2.x ,v2.y);
return 0;


return 0 ;
}

