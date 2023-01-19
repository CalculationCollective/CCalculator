#include <stdio.h>

int main(int argc, char const *argv[])
{
    double first = 0;
    int func  = 0;
    double second = 0;

    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Choose between:\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n");
    scanf("%d", &func);
    printf("Enter second number: ");
    scanf("%lf", &second);

    switch (func)
    {
    case 1:
        printf("%lf", first + second);
        break;
    case 2:
        printf("%lf", first - second);
        break;
    case 3:
        printf("%lf", first * second);
        break;
    case 4:
        printf("%lf", first / second);
        break;
    default:
        printf("No valid function chosen");
        break;
    }
    
    printf("\n");

    return 0;
}
