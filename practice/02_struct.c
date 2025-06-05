#include <stdio.h> 
#include <string.h> 

struct employee{
    char name[30];
    int salary;
    int no;
};

int main(){
    struct employee user[10];

    for (int i = 0; i < 10; i++)
    {
        sprintf(user[i].name,"Faisal%d",i);
        user[i].salary = 40000*(i+1);
        user[i].no = 4500+i;
    }

    for (int i = 0; i < 10; i++){
        printf("The employee name is %s and its salary is %d and theire no is %d\n",user[i].name,user[i].salary,user[i].no);
    }
    
    return 0;
}