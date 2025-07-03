#include <stdio.h>
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
    char word1[50];
    char word2[50];
    int score = 0;
    int n = strlen(word1);
    printf("Input the 1ª Word: \n");
    scanf("%s", word1);˜
    printf("Input the 2º Word: \n");
    scanf("%s", word2);
    conv (word1);
    conv (word2);

    for(int i = 0; i < n; i++)
    {
        if (word1[i] == word2[i])
        {
            score ++;
        }
    }
    if (score == n)
    {
        printf("The words are the same");
    }
    else
    {
        printf("The words are different");
    }
}
