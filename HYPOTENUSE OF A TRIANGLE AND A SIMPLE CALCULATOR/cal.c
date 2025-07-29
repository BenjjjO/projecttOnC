#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{

    double a;
    double b;
    double c;

    char operator;
    double num1;
    double num2;
    double result;
    double number, squareroot;
    float temp;

printf("To find the hypotenuse of a triangle\n");
    printf(" enter side a: ");
    scanf("%lf", &a);

    printf("enter side b: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);
    printf("side c : %lf\n", c);

    printf("\nenter an operator (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("enter number 1: ");
    scanf("%lf", &num1);

    printf("enter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult:%lf", result);
        break;

    case '-':
        result = num1 - num2;
        printf("\nresult:%lf", result);
        break;

    case '*':
        result = num1 * num2;
        printf("\nresult:%lf\n", result);
        break;

    case '/':
        result = num1 / num2;
        printf("\nresult:%lf\n", result);
        break;

    default:
        printf("%c is not a valid operator\n", operator);
    }

    printf("\nenter a number to find the square root: ");
    scanf("\n%lf", &number);

    squareroot = sqrt(number);
    printf("\nsquare root of %.2lf = %.2lf", number, squareroot);

    printf("\n0 to 35 is the normal room temperature\n");
    scanf("\n%f", &temp);
    if (temp <= 0 || temp >= 35)
    {
        printf("\n the room temperature is bad!!");
    }
    else
    {
        printf("\n the wether is good!!");
    }

    return 0;
}