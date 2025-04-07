#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char word[30];
    scanf("%s",word);
   if(strstr(str,word)!=NULL){
    printf("Yes");
   }
 else {
    printf("No");
}

}