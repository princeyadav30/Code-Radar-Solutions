#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count[n];
    for(int i=0;i<n;i++){
       count[i]=0;
    }
    
    for(int i=0;i<n;i++){
        
       
        if(count[i]==1){
            continue;
        }
        int frequency=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                frequency+=1;
                count[j]=1;
            }
            
           
        } printf("%d %d\n",arr[i],frequency);
    }
    
}