#include <stdio.h>

void block(int n)
{
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main ()
{
    int n;
    while(1)
    {
        printf ("What size you want you're brick wall to have: \n");
        scanf("%i", &n);
        if(n > 0)
        {
            block(n);
            break;
        }
        else
        {
            printf("Input a value greater then 0 \n");
        }
    }
    return 0;
}
