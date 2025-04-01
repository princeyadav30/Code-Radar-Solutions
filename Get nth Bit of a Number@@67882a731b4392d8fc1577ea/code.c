// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int mask=1<<n;
    if(num & mask){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}