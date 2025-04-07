#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int length[n];
    int count=0;
    for(int i=0;i<n;i++){
       if(arr[i]==1){
        count++;
       }
       else if(arr[i]==arr[i+1]){
        count++;
        break;
       }
       else if(arr[i]==2){
        count++;
       }
       else if(arr[i]==3){
        count++;
       }
       else if(arr[i]==4){
        count++;
       }
       else if(arr[i]==5){
        count++;
       }
       else if(arr[i]==6){
        count++;
       }
       else if(arr[i]==7){
        count++;
       }
       else if(arr[i]==8){
        count++;
       }
       else if(arr[i]==9){
        count++;
       }
       else if(arr[i]==0){
        count++;
       }
       else if(arr[i]==-1){
        count++;
       }
       else if(arr[i]==10){
        count++;
       }
       else if(arr[i]==11){
        count++;
       }
       else if(arr[i]==12){
        count++;
       }
       else if(arr[i]==13){
        count++;
       }
       else if(arr[i]==14){
        count++;
       }
       else if(arr[i]==15){
        count++;
       }
    }
    printf("%d",count);

}