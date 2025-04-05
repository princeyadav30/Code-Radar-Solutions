// Your code here...
#include <stdio.h>
#include <ctype.h>


char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    a=tolower(a);
    if(a>='a'&&a<='z'){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else if(isdigit(a)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}