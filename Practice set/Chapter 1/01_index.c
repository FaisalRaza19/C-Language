#include <stdio.h>

int main(){
    int height,width;
    printf("Enter the height: ");
    scanf("%d",&height);
    printf("Enter the width: ");
    scanf("%d",&width);
    int area = height * width;
    printf("%d",area);
    return 0;
}