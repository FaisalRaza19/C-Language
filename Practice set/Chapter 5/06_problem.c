#include <stdio.h> 

int sum_of_number(int n){
    if (n ==1){
        return 1;
    }
    // formula is 1 + 2 + 3 + 4 + 5 .... n - 1 + n
    // sum formula   (n-1)+n 
    return sum_of_number(n-1)+n;
}

int main(){
    int a = sum_of_number(5);
    printf("%d",a);
     return 0;
}