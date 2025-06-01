#include <stdio.h> 

int main(){
    int a = 5;
    // adress of a in memory "&" use to get the memory location of variable.
    // printf("The address of a is %u\n",&a);
    printf("The address of a is %p\n",&a);
    // "*" use to store a memory of variable in another variable called pointer like "j"
    int *j = &a;
    int ** k = &j;
    printf("The address of a is %p\n",j);
    printf("The address of j is %p\n",k);


    // get the value store that address 
    printf("The value store in address is %d\n",*j); // both are coorect
    printf("The value store in address is %d\n",*(&a));
    printf("The value store in address is %p\n",*(&j));
    return 0;
}