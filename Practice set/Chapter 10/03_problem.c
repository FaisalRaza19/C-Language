#include <stdio.h> 

int main(){
    char ch;
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("index.txt","r");
    ptr2 = fopen("index1.txt","a");

    while (1)
    {
        ch = fgetc(ptr1);
        if(ch  == EOF){
           break;
        }
        else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
            printf("%c",ch);
        }
    }
    
     return 0;
}