#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int n=strlen(str1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(str1[j]>str1[j+1]){
                int temp=str1[j+1];
                str1[j+1]=str1[j];
                str1[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(str2[j]>str2[j+1]){
                int temp=str2[j+1];
                str2[j+1]=str2[j];
                str2[j]=temp;
            }
        }
    }
    int anagram=1;
    for(int i=0;i<n;i++){
        if(str1[i]!=str2[i]){
            anagram=0;
        }
    }
    if(anagram){
        printf("Yes");
    }else{
        printf("No");
    }

}