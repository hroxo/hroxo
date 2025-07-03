#include <stdio.h>

void calculate(char c, int a, int b)
{

    if (c == '+')
    {
        printf("The result is: %i\n", a + b);
    }
    else if (c == '-')
    {
        printf("The result is: %i\n", a - b);
    }
    else if (c == '*')
    {
        printf("The result is: %i\n", a * b);
    }
    else if (c == '/')
    {
        if (b != 0)
        {
            printf("The result is: %.3f\n", (float) a / (float) b);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
    }
}

int main ()
{
    int a, b;
    char c;

    printf("Input first number: \n");
    scanf("%i", &a);

    printf("Input second number: \n");
    scanf("%i", &b);

    while (1)
    {
        printf("Input one of the operations (+, -, /, *): \n");
        scanf(" %c", &c);

        if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            calculate(c, a, b);
            break;
        }
        else
        {
            printf("Invalid operation. Try again.\n");
        }
    }

    return 0;
}
