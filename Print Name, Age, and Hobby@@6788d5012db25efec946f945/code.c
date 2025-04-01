#include <stdio.h>



int main() {
    int age;
    char name[100],hobby[100];
    scanf("%s %d",&name,&age);
    scanf("%s",&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    
    return 0;
}