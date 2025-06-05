#include <stdio.h> 
#include <string.h> 

struct employee{
    char name[30];
    int salary;
    int no;
};

int main(){
    char a[30];
    int b,c;
    printf("Enter the name: ");
    scanf("%s",&a);
    printf("Enter the salary: ");
    scanf("%d",&b);
    printf("Enter the Number: ");
    scanf("%d",&c);
    struct employee e1;
    strcpy(e1.name,a);
    e1.salary = b;
    e1.no = c;
    printf("The employee name is %s and its salary is %d and theire no is %d",e1.name,e1.salary,e1.no);
     return 0;
}