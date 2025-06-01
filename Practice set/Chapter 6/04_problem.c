#include <stdio.h> 

void value(int*a){
    printf("The value is %d",*a);
}

int main(){
    int a = 40;
    value(&a);
     return 0;
}