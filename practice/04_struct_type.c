#include <stdio.h> 
#include <string.h> 

typedef struct employee{
    char name[30];
    int salary;
    int no;
}emp;

int main(){
    emp e1;
    e1.salary = 5000;
    printf("%d",e1.salary);
     return 0;
}