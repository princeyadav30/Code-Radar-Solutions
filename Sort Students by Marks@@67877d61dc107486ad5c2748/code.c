#include<stdio.h>
struct student{
    int rollNumber;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];
  
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }
      for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(students[j].marks < students[j + 1].marks) {
                struct student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
    printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollNumber,students[i].name,students[i].marks);
}}