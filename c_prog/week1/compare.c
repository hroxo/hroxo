#include <stdio.h>

int main ()
{
    int x;
    int y;
    printf ("What is x? ");
    scanf("%i", &x);
    printf ("What is y? ");
    scanf("%i", &y);

    if (x<y)
    {
        printf ("X is bigger then Y\n");
    }

    else if (x>y)
    {
        printf ("X is smaller then Y\n");
    }

    else
    {
        printf ("X is equals then Y\n");
    }
    return 0;
}
