//create a structure represting a bank account of a custmer. what fields did you use and why?

#include<stdio.h>

struct accountHolder
{
    char name[14];
    int date;
    float balance;
};


int main(){

struct accountHolder avni={"avani",12,123.76};
struct accountHolder mohit={"mohit",1,2344.76};
struct accountHolder ankur={"ankur",13,2344.76};

printf("avani,s---- \n");
printf("name  is : %s\n",avni.name);
printf("date  is : %d\n",avni.date);
printf("balance  is : %f\n",avni.balance);

printf("mohit,s---- \n");
printf("name  is : %s\n",mohit.name);
printf("date  is : %d\n",mohit.date);
printf("balance  is : %f\n",mohit.balance);

printf("ankur,s---- \n");
printf("name  is : %s\n",ankur.name);
printf("date  is : %d\n",ankur.date);
printf("balance  is : %f\n",ankur.balance);
return 0 ;
}


