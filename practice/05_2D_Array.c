#include <stdio.h> 

int main(){
    int n[3][2];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter the Number: ");
            scanf("%d",&n[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("The value at %d %d is %d \n",i,j,n[i][j]);
        }   
    }
    
    
    return 0;
}