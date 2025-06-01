#include <stdio.h> 

int main(){
    // here evaluation did not determine so compiler evaluate it right to left 
    // expect answer is 4 5 5
    // actually given answer is 6 6 4
    // both answer are correct
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++); 
    return 0;
}