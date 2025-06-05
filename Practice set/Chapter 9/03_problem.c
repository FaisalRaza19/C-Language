#include <stdio.h> 

typedef struct employee{
    int salary;
    int no;
}emp;

int main(){
    emp e1;
    emp *ptr;
    e1.salary = 5000;
    ptr = &e1;
    printf("%d",ptr->salary);
     return 0;
}