#include <stdio.h>
int main()
{
    float l,w;

    printf("Enter length of rectangle: ");
    scanf("%f",&l);

    printf("Enter width of rectangle:");
    scanf("%f",&w);

    float area=l*w;

    printf("Area of rectangle with length %.2f and width %.2f is %.2f\n",l,w,area);

    return 0;
}
