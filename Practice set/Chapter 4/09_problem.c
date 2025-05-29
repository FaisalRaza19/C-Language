#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool temp = true;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n <= 1){
        temp = false;
    }else{
        for (int i = 2; i <= n/2; i++){
            if (n % i == 0){
                temp = false;
                break;
            }
        }
    }
    if (temp) {
        printf("This is prime number");
    }
    else{
        printf("This is not prime number");
    }

    return 0;
}