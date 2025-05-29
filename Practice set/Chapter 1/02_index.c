#include <stdio.h>
#include <string.h>

int main() {
    int radius;
    printf("Enter the diameter of the circle: ");
    scanf("%d", &radius);
    float area = 3.14 * radius * radius;
    printf("The radius of circle with diameter %d is %.2f \n", radius, area);

    char choice[4];
    printf("Do you want to find the volume of a cylinder using this circle as base? (yes/no): ");
    scanf("%s", choice);

    if (strcmp(choice, "yes") == 0) {
        int height;
        printf("Enter the height of the cylinder: ");
        scanf("%d", &height);

        float volume = area * height;
        printf("The volume of the cylinder with base area %.2f and height %d is %.2f\n", area, height, volume);
    }

    return 0;
}
