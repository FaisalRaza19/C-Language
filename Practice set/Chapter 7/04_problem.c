#include <stdio.h> 

int positive_number(int arr[],int n){
    int positive_count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0){
            positive_count++;
        }
        
    }
    return positive_count;
}
int main(){
    int n[10] = {4,2,6,-2,-8,3,12,-15,9,-1};
    int a = positive_number(n,10);
    printf("%d",a);
    return 0;
}