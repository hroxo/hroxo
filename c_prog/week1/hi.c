d#include <stdio.h>
#include <ctype.h>
#include <string.h>

//converte uma string com uppercase em lowercase
char *conv (char word[99])
{
    for(int i = 0, n = strlen(word); i < n ; i++ )
    {
        if (isupper(word[i]))
        {
            word[i] = tolower(word[i]);
        }
    }
    return word;
}

int main (void)
{
    char word[50];
    printf("Input a Word: \n");
    scanf("%s", word);
    printf("%s\n", conv (word));
}
