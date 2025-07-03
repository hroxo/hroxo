#include <stdio.h>

void draw (int n);

int main()
{
    int height;
    printf("Input height: \n");
    scanf("%i", &height);
    draw(height);
}

void draw (int n)
{
    if (n < -1)
    {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
