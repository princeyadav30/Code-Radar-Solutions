#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char word1[30] ,word2[30],word3[30],word4[30],word5[30],word6[30],word7[30];
    int count = sscanf(str, "%s %s %s %s %s %s %s", word1, word2, word3,word4,word5,word6,word7);
    if(count<1){
        printf("0");
    }else{
    printf("%d",count);}
}