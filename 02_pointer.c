#include <stdio.h> 
// call by value and call by refrence 
int sum(int* a,int* b){
    *a = 8;
    return *a+*b;
}

int main(){
    int a = 6;
    int b = 8;
    printf("The sum is %d\n",sum(&a,&b));
    printf("The value of a is %d\n",a);
     return 0;
}