#include <stdio.h> 
struct vector{
    int i;
    int j;
};

struct vector sum(struct vector x,struct vector y){
    struct vector z = {x.i+y.i,x.j+y.j};
    return z;
}
int main(){
    struct vector x = {4,8};
    struct vector y = {3,6};
    struct vector v = sum(x,y);
    printf("The value of vector is %di and %dj",v.i,v.j);
     return 0;
}