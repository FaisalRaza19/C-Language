#include <stdio.h> 

int main(){
    // arthimetic addition pointer using integer 
    // int a = 45;
    // int* ptr = &a;
    // printf("The address is %u\n",&a);
    // printf("The address is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);

    // arthimetic addition pointer using char 
    // char a1 = '4';
    // char* ptr1 = &a1;
    // printf("The address is %u\n",&a1);
    // printf("The address is %u\n",ptr1);
    // ptr1++;
    // printf("The value of ptr1 is %u\n",ptr1);

    // arthimetic subtraction pointer using integer 
    int a2 = 45;
    int* ptr2 = &a2;
    printf("The address is %u\n",&a2);
    printf("The address is %u\n",ptr2);
    ptr2--;
    printf("The value of ptr2 is %u\n",ptr2);
    return 0;
}