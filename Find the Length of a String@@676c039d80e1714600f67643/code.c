#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int i=0;
    int count=0;
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}