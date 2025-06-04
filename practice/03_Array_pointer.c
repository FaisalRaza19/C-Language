#include <stdio.h> 

int main(){
    int a[] = {4,5,6,7,8};
    // creting pointer in array both are correct 
    // int* ptr = &a[0];
    int* ptr = a;

    for (int i = 0; i < 5; i++){
        printf("The value at index %d is %d\n",i,a[i]);
        // get value from array using ptr 
        printf("The value at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    return 0;
}