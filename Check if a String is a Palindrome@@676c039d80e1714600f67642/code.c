#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    char rev[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i=n-1;i>=0;i--){
       rev[i]=str[n-i-1];
    }
    rev[n]='\0';
    if(strcmp(rev,str)==0){
        printf("Yes");
    }else{
        printf("No");
    }
}