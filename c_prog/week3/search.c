#include <stdio.h>

int main ()
{
    while(1)
    {
        int numbers [] = {10, 20, 500, 100, 50, 2, 13};
        int n;
        printf("Input a number to search: \n");
        scanf("%i", &n);
        for(int i = 0, j = sizeof(numbers) + 1; i < j; i++)
        {
            if (numbers[i] == n)
            {
                int pos = i + 1;
                printf("The number was found in %i position\n", pos);
                return 0;
            }
        }
        printf("Number not found\n");
        return 1;x
    }
}
