#include<stdio.h>
#include<math.h>

void sol11(void)
{
    double a, b, c, x;

    printf("Enter the coefficients:\n");
    printf("a?");
    scanf(" %lf", &a);
    printf("b?");
    scanf(" %lf", &b);
    printf("c?");
    scanf(" %lf", &c);
    x = (c - b) / a;
    printf("Solution: x = %lf\n", x);
    return;
}

void sol12(void)
{
    double a1, b1, c1, a2, b2, c2;
    double x, y;

    printf("Enter the coefficients:\n");
    printf("a1?");
    scanf(" %lf", &a1);
    printf("b1?");
    scanf(" %lf", &b1);
    printf("c1?");
    scanf(" %lf", &c1);
    printf("a2?");
    scanf(" %lf", &a2);
    printf("b2?");
    scanf(" %lf", &b2);
    printf("c2?");
    scanf(" %lf", &c2);

    x = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
    y = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);

    printf("Solution: x = %lf, y = %lf\n", x, y);
    return;
}

void sol21(void)
{
    double a, b, c;
    double x1, x2;

    printf("Enter the coefficients:\n");
    printf("a?");
    scanf(" %lf", &a);
    printf("b?");
    scanf(" %lf", &b);
    printf("c?");
    scanf(" %lf", &c);

    if (b*b - 4*a*c < 0) {
        printf("No Real roots!\n");
    }

    else if (a == 0) {
        printf("Error! a cannot be 0!\n");
    }

    else {
        x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a;
        x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a;
        printf("Roots: x1 = %lf, x2 = %lf\n", x1, x2);
    }
    return;
}
