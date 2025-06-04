#include <stdio.h>

int String_Length(char str[]){
    int n = 0,count;
    char i = str[n];
    while (i != '\0')
    {
        i = str[n];
        n++;
    }
    count = n - 1;
    return count;
}
int main()
{
    char str[] = "Faisal";
    printf("%d", String_Length(str));

    return 0;
}