#include <stdio.h> 

int Fibonacci(int n){
    if (n <=1){
        return n;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a = Fibonacci(n);
    printf("%d",a);
     return 0;
}