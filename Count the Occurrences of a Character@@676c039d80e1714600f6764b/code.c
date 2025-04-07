#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char a;
    scanf(" %c",&a);
    int n=strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]==a){
            count++;
        }
    }
    printf("%d",count);
}