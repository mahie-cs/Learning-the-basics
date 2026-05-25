#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

int main(void)
{
    int input;
    double side, length, width, base, height, radius, area;

    printf("Area Calculator\n");
    printf("Choose a shape to calculate the area:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("5. Parallelogram\n");
    printf("6. Trapezoid\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &input);
    if (input < 1 || input > 6) {
        printf("Invalid choice.\n");
        return 1;
    }
    switch(input) {
        case 1:
            printf("Enter the side length of the square: ");
            scanf("%lf", &side);
            if (side <= 0) {
                printf("Invalid side length.\n");
                return 1;
            }
            area = side * side;
            printf("Square area: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%lf", &length);
            if (length <= 0) {
                printf("Invalid length.\n");
                return 1;
            }
            printf("Enter the width of the rectangle: ");
            scanf("%lf", &width);
            if (width <= 0) {
                printf("Invalid width.\n");
                return 1;
            }
            area = length * width;
            printf("Rectangle area: %.2f\n", area);
            break;
        case 3:
            printf("Enter the base of the triangle: ");
            scanf("%lf", &base);
            if (base <= 0) {
                printf("Invalid base.\n");
                return 1;
            }
            printf("Enter the height of the triangle: ");
            scanf("%lf", &height);
            if (height <= 0) {
                printf("Invalid height.\n");
                return 1;
            }
            area = 0.5 * base * height;
            printf("Triangle area: %.2f\n", area);
            break;
        case 4:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            if (radius <= 0) {
                printf("Invalid radius.\n");
                return 1;
            }
            area = PI * radius * radius;
            printf("Circle area: %.2f\n", area);
            break;
        case 5:
            printf("Enter the base of the parallelogram: ");
            scanf("%lf", &base);
            if (base <= 0) {
                printf("Invalid base.\n");
                return 1;
            }
            printf("Enter the height of the parallelogram: ");
            scanf("%lf", &height);
            if (height <= 0) {
                printf("Invalid height.\n");
                return 1;
            }
            area = base * height;
            printf("Parallelogram area: %.2f\n", area);
            break;
        case 6:
            printf("Enter the first base of the trapezoid: ");
            scanf("%lf", &base);
            if (base <= 0) {
                printf("Invalid first base.\n");
                return 1;
            }
            printf("Enter the second base of the trapezoid: ");
            scanf("%lf", &width);
            if (width <= 0) {
                printf("Invalid second base.\n");
                return 1;
            }
            printf("Enter the height of the trapezoid: ");
            scanf("%lf", &height);
            if (height <= 0) {
                printf("Invalid height.\n");
                return 1;
            }
            area = 0.5 * (base + width) * height;
            printf("Trapezoid area: %.2f\n", area);
            break;
    }
    return 0;
}