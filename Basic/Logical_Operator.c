#include<stdio.h>
#include<stdbool.h>

int main(){
//    bool result = (2 < 5) && !(3>5);
   bool result = (2 < 5) || (3>5);

   printf("%d" , result) ;
   return 0;
}