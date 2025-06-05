#include <stdio.h> 

struct vector{
    int i;
    int j;
};

int main(){
    struct vector x = {1,2};
    printf("%d %d",x.i,x.j);
     return 0;
}