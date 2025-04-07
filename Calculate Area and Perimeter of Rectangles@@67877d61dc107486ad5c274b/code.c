#include<stdio.h>
typedef struct rectangle{
    int length;
    int breadth;
}rect;
int main(){
    int n;
    scanf("%d",&n);
    rect rectangles[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&rectangles[i].length,&rectangles[i].breadth);
    }
    for(int i=0;i<n;i++){
        float l=rectangles[i].length;
        float b=rectangles[i].breadth;
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,l*b,2*(l+b));
    }
    
}