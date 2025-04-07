#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i = 0; i < n; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
        printf("%c", str[i] - 32);
    } else {
        printf("%c", str[i]); 
    }
}

}