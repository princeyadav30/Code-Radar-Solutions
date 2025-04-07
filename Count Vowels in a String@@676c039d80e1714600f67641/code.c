#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str[100];
scanf("%[^\n]",str);
int n=strlen(str);
int count=0;
for(int i=0;i<n;i++){
    char a=tolower(str[i]);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        count++;
    }
}printf("%d",count);}