#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));
    int num = (rand() % 100) + 1;
    printf("%d \n",num);
    int x = 1;
    do
    {
        int n;
        printf("Enter the number: ");
        scanf("%d",&n);
        if (n == num){
            printf("You guess the number in %d attempts.the number is %d \n",x,num);
            break;
        }
        else if (n > num)
        {
            printf("Enter the less number \n");
        }
        else{
            printf("Enter the great number \n");
        }
        x++;   
    } while (x);
    
    
    return 0;
}