#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char word1[30] ,word2[30],word3[30],word4[30];
    int count = sscanf(str, "%s %s %s %s", word1, word2, word3,word4);
    if (count < 4) word4[0] = '\0';
    if (count < 3) word3[0] = '\0';
    if (count < 2) word2[0] = '\0';
    if (count < 1) word1[0] = '\0';
    int n1=strlen(word1);
    int n2=strlen(word2);
    int n3=strlen(word3);
    int n4=strlen(word4);
    if(n1>n2 && n1>n3 && n1>n4){
        printf("%s",word1);
    }
    else if(n2>n1 && n2>n3 &&n2>n4){
        printf("%s",word2);
    }
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("%s",word3);
    }
    else if(n4>n1 && n4>n2 && n4>n3){
        printf("%s",word4);
    }
}