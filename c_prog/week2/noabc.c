#include <stdio.h>
#include <string.h>

char novog (char c)
{
    if (c == 'a')
    {
        c = '4';
    }
    else if (c == 'e')
    {
        c = '3';
    }
    else if (c == 'i')
    {
        c = '1';
    }
    else if (c == 'o')
    {
        c = '0';
    }
    else if (c == 'u')
    {
        c = 'v';
    }
    return c;
}

int main (int argc, char *argv[])
{
    if (argc < 1)
    {
        printf("Error please input a word\n");
        return 1;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; j < strlen(argv[i]); j++)
            {
                argv[i][j] = novog(argv[i][j]);
            }
            printf("%s ", argv[i]);
        }
        printf("\n");
        return 0;
    }
}

