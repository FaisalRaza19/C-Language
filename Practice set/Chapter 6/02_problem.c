#include <stdio.h> 

int address(int* i){
    printf("The address is %p\n",i);
}
int main(){
    int i = 45;
    int* n = &i;
    printf("The address is %p\n",&i);
    address(n);
     return 0;
}