#include <stdio.h> 

int* sum(int a,int b){
    int s = a+b;
    int* j = &s;
    printf("The sum is %d\n",s);
    return j;
}

float* average(int a,int b){
    float avg = (a+b)/2.0;
    float* j = &avg; 
    printf("The avg is %f\n",avg);
    return j;
}

int main(){
    int a = 5;
    int b = 23;

    int* ptr1 = sum(a,b);
    float* ptr2 = average(a,b);
    printf("The address of sum is %u and average is %u",ptr1,ptr2);

     return 0;
}