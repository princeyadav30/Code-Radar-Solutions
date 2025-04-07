#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word1[30],word2[30];
    scanf("%[^\n]",str);
    sscanf(str,"%s %s",word1,word2);
    int n1=strlen(word1);
    int n2=strlen(word2);
    for(int i=0;i<n1/2;i++){
        char temp=word1[i];
        word1[i]=word1[n1-i-1];
        word1[n1-i-1]=temp;
    }
    for(int i=0;i<n2/2;i++){
        char temp=word2[i];
        word2[i]=word2[n2-i-1];
        word2[n2-i-1]=temp;
    }
    printf("%s %s",word1,word2);
}