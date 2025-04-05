// Your code here...
void fibonacciSeries(int n){
    int a=0;
    int b=1;
    int c=0;
    for(int i=0;i<n;i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;

    }
}