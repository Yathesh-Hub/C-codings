#include <stdio.h>

int main() {
    float l, w, area;

    printf("Enter the length : ");
    scanf("%f", &l);

    printf("Enter the width : ");
    scanf("%f", &w);

    area = l* w;
    printf("Area of the rectangle: %f\n", area);

    return 0;
}
