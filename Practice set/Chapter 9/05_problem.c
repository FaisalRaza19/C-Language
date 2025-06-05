#include <stdio.h> 

typedef struct complex{
    int i;
    int j;
}cmp;

cmp display(cmp c){
    printf("The value is %d + %di\n",c.i,c.j);
}

int main(){
    cmp c[5];
    printf("Enter the number: ");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real number: ");
        scanf("%d",&c[i].i);
        printf("Enter imaginary number: ");
        scanf("%d",&c[i].j);
        display(c[i]);
    };

     return 0;
}