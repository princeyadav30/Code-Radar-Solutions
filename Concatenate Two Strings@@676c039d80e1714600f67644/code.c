#include<stdio.h>
int main(){
   char str1[100];
   char str2[100];
   scanf("%[^\n]",str1);
   scanf(" %[^\n]",str2);
   printf("%s%s",str1,str2);

}