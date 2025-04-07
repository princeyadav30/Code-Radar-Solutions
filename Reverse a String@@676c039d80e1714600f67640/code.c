#include<stdio.h>
#include<string.h>
int main(){
    char arr[100];
    scanf("%[^\n]",arr);
    int n=strlen(arr);
    for(int i=0;i<n/2;i++){
        char temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        }
        printf("%s",arr);
}