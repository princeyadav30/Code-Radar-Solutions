// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int msb_mask=1<<31;
    if(a & msb_mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}   