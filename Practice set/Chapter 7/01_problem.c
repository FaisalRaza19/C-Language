#include <stdio.h> 

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int* ptr = arr;
    printf("%u and %d",ptr+3,*ptr+3);
     return 0;
}