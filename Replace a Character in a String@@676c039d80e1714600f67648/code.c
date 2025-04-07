#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char a,b;
    scanf(" %c %c",&a,&b);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
    printf("%s",str);
}