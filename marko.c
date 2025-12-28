#include <stdio.h>
#include <math.h>

int main() {
    int choice, subchoice;
    float r, l, b, base, height;
    float a, c, d, s, area;

    printf("MENU\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Triangle Options\n");
            printf("1. Using base and height\n");
            printf("2. Using three sides\n");
            printf("Enter sub choice: ");
            scanf("%d", &subchoice);

            if (subchoice == 1) {
                printf("Enter base and height: ");
                scanf("%f %f", &base, &height);
                area = 0.5 * base * height;
                printf("Area of Triangle = %.2f\n", area);
            } else if (subchoice == 2) {
                printf("Enter three sides: ");
                scanf("%f %f %f", &a, &c, &d);
                s = (a + c + d) / 2;
                area = sqrt(s * (s - a) * (s - c) * (s - d));
                printf("Area of Triangle = %.2f\n", area);
            } else {
                printf("Invalid sub choice\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
