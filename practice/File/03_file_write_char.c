#include <stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("index3.txt","a");
    // char c = fgetc(ptr);
    // printf("%c",c);
    fputc('i',ptr);

    fclose(ptr);
     return 0;
}