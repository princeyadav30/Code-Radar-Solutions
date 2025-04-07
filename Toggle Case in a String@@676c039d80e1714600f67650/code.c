#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i]=toupper(str[i]);
        }else{
            continue;
        }
    }
    printf("%s",str);
}