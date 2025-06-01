#include <stdio.h> 

int main(){
    int a = 72;
    int * j = &a;
    printf("The address of a is %p\n",j);
    printf("The value of a is %d\n",*j);
    printf("The value of a is %d\n",*(&a));
     return 0;
}