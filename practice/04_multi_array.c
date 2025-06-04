#include <stdio.h> 

int main(){
    int a[][3] = {{7,8,9},{1,2,3},{11,12,13}};

    for (int i = 0; i < 3; i++){
        printf("The value at index %d is %d\n",i,a[0][i]);
    }
    
     return 0;
}