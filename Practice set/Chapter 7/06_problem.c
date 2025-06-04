#include <stdio.h>

int main()
{
    int a[2][3][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int x = 0; x < 4; x++)
            {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}