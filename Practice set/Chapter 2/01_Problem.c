#include <stdio.h>

int main(){
    int input;
    printf("Enter the number: ");
    scanf("%d", &input);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",input*i);
    }
    

    return 0;
}