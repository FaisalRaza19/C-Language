#include <stdio.h> 

typedef struct complex{
    int i;
    int j;
}cmp;

int main(){
    cmp c = {4,8};
    printf("The value is %d + %di",c.i,c.j);
     return 0;
}