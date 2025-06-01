#include <stdio.h> 

float temperture_converter(float a){
    return (a * 9/5) + 32;
}

int main(){
    float temp = temperture_converter(39);
    printf("%.2f °F\n",temp);
     return 0;
}