#include <stdio.h> 
#include <string.h>

int main(){
    char c[]="Faisal 2007";
    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = c[i]+1;
    }

    printf("%s",c);
    
     return 0;
}