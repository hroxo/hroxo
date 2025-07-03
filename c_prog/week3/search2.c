#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
    char *strings [] = {"carro" , "ferro", "martelo", "limão"};
    char input [20];
    printf("Input: \n");
    scanf("%s", input);
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(input, strings[i]) == 0)
        {
            int n = i + 1;
            printf ("Input found successfully \n");
            return 0;
        }
    }
    printf ("Input not found\n");
    return 1;
}
