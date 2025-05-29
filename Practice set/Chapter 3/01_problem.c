#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 1st subject marks out of 100: " );
    scanf("%d",&a);
    printf("Enter 2nd subject marks out of 100: " );
    scanf("%d",&b);
    printf("Enter 3rd subject marks out of 100: " );
    scanf("%d",&c);
    int z = (a+b+c)/300*100;
    if(z <= 40 && a >= 33 && b >= 33 && c >= 33)
        printf("Student is pass");
    else
        printf("student is fail");
    return 0;
}