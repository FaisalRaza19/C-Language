#include <stdio.h> 

float mass_of_body(float mass){
    return mass * 9.8;
}

int main(){
    float mass = mass_of_body(89);
    printf("%.2f N",mass);
    return 0;
}