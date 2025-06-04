#include <stdio.h> 

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[],int n){
    int temp;
    for (int i = 0; i < n/2; i++){
        printf("The value is %d\n",arr[n-1-i]);
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    } 
}
int main(){
    int n[] = {1,2,3,4,5,6};
    printArray(n,6);
    reverseArray(n,6);
    printArray(n,6);
    return 0;
}