#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
}
person;

int main (int argc, char *argv[])
{
    person people[20];
    people[0].name = "Maria";
    people[0].number = "912 123 123";

    people[1].name = "Pai";
    people[1].number = "962 123 123";

    people[2].name = "Mae";
    people[2].number = "919 123 123";
    /*
    int answer;
    printf("Do you pretend to add any number \nChoose 0 for 'No' and 1 for 'Yes': \n");
    for(int j = 3; j < 20; j++)
    {
        int answer;
        printf("Do you pretend to add any number \nChoose 0 for 'No' and 1 for 'Yes': \n");
        scanf("%s", answer);
        if (answer == 1)
        {
            printf("What is the name of the contact: \n");
            scanf("%[^\n]%*c", people[j].name); //Lê a linha toda mesmo com espaços
            printf("What is the number of the contact: \n");
            scanf("%[^\n]%*c", people[j].number); //Lê a linha toda mesmo com espaços
        }
        else
        {

        }
    }
*/
    char input[20];
    printf("Pesquise: \n");
    scanf("%[^\n]%*c", input); //Lê a linha toda mesmo com espaços
    for (int i = 0, n = sizeof(people); i < n; i++)
    {
        if (strcmp(people[i].name, input) == 0 || strcmp(people[i].number, input) == 0)
        {
            printf("The number you're searching is: \n%s \n%s \n", people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Number not Found\n");
}
