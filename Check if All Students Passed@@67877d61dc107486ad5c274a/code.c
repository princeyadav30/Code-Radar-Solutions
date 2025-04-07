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
    int count=0;
  
    
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }
    
    for(int i=0;i<n;i++){
        if(students[i].marks>50){
            count++;
        }
    
    }
    if(count==n){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
    
    
    }