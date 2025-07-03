#include <stdio.h>

float average (int lenght, int array []);

int main (void)
{
    int N;
    printf ("How many scores you want to use? \n");
    scanf("%i", &N);
    int scores [N];
    for (int i = 0; i < N; i++)
    {
        int n = i + 1;
        printf("Give me you're %i best scores: \n", n);
        scanf("%i", &scores[i]);
    }
    printf ("The average is: %.2f\n", average(N, scores));
}

float average (int lenght, int array [])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }
    return (float) sum/(float) lenght;
}
