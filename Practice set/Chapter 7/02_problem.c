#include <stdio.h> 

int main(){
    int n[10];
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    for (int i = 0; i < 10; i++){
        n[i] = x*(i+1);
    }

    for (int i = 0; i < 10; i++){
        printf("%d\n",n[i]);
    }
    
    return 0;
}