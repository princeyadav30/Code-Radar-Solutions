// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    int leading_zeroes=__builtin_clz(num);
    printf("%d",leading_zeroes);
    return 0;
}