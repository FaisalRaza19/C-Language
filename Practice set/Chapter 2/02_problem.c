#include <stdio.h> 

int main(){
    int input;
    printf("Enter the number: ");
    scanf("%d",&input);
    for (int i = 10; i; i--)
    {
        printf("%d * %d is qual to %d \n",input,i,input*i);
    }
    
    return 0;
}