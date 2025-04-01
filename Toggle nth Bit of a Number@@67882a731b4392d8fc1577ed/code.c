// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,n;
    scanf("%d %d",&num,&n);
    int mask=1<<n;
    num=num^mask;
    printf("%d",num);
    return 0;
}