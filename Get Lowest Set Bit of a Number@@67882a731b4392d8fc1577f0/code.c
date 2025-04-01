// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num;
   scanf("%d",&num);
   int lsb= num & -num;
   int position=0;
   while(lsb>1){
    lsb=lsb>>1;
    position++;
    }

   printf("%d",position);
    return 0;
}