#include <stdio.h> 

int main(){
    int n;
    int i = 1;
    int factorial = 1;
    printf("Enter the number: ");
    scanf("%d",&n);

    while (i <= n)
    {
        factorial*=i;
        i++;
    }
    printf("The factorial of %d is %d",n,factorial);
    
     return 0;
}