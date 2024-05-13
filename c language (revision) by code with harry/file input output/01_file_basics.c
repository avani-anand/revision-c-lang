#include<stdio.h>


int main(){
 FILE *ptr;
 ptr =fopen("sample.txt","r")   ;   //---for reading the file
//  ptr= fopen("sample.txt","w");     // for writting to a file
// if we trying to write in file which does not exist then it crete that file with the given name
return 0 ;
}