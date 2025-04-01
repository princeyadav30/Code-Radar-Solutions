// Your code here...
#include <stdio.h>

void decimal_to_binary(int n){
    if(n==0){
        return;
    }
    decimal_to_binary(n/2);
    printf("%d",n%2);
}

int main() {
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("0");
        }else {decimal_to_binary(num);}
    printf("\n");  
    return 0;
}