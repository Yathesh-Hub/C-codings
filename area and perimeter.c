#include <stdio.h>
int main() {
    int le, wi, area, perimeter;
    printf("Enter length of the rectangle: ");
    scanf("%d", &le);
    printf("Enter width of the rectangle: ");
    scanf("%d", &wi);
    area = le*wi;
    perimeter = 2 * (le+wi);
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);

    return 0;
}

