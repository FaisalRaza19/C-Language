#include <stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("index.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("The value is %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("The value is %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("The value is %d\n",num);
    fclose(ptr);
     return 0;
}