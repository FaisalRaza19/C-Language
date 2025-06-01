#include <stdio.h> 

float average(int a,int b,int c){
    return (a+b+c)/3;
}

int main(){
    float a = average(82,67,56);
    printf("%.2f",a);
    return 0;
}