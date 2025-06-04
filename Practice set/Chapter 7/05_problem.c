#include <stdio.h> 

int main(){
    int arr[3][10];
    int n[3];
    for (int i = 0; i < 3; i++){
        printf("Enter the number: ");
        scanf("%d",&n[i]);
    }

    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 10; j++){
            arr[i][j] = n[i]*(j+1);
        }
    }
    

    for (int i = 0; i < 3; i++) {
        printf("Multiplication table of %d:\n", n[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d x %d = %d\n", n[i], j + 1, arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}