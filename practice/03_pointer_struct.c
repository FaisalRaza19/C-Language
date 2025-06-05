#include <stdio.h> 

struct employee{
    char name[30];
    int salary;
    int no;
};

int main(){
    struct employee e1;
    struct employee *ptr;
    e1.salary = 50000;
    ptr = &e1;
    printf("%d",(*ptr).salary); // both printf same
    printf("%d",ptr->salary);
     return 0;
}