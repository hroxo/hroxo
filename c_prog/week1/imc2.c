#include <stdio.h>

void health (float imc);

int main (void)
{
    float pessoa[2];
    printf("Quanto pesa a pessoa: \n");
    scanf("%f", &pessoa[0]);
    printf("Quanto mede a pessoa (em m): \n");
    scanf("%f", &pessoa[1]);
    float imc = pessoa[0] / (pessoa[1] * pessoa[1]);
    health(imc);
}

void health (float imc)
{
    if (imc < 18.5)
    {
        printf ("Encontra-se abaixo de peso\n");
    }
    else if (imc < 24.5)
    {
        printf ("Encontra-se em peso normal\n");
    }
    else if (imc < 30)
    {
        printf ("Encontra-se em ligeiramente a cima de peso\n");
    }
    else if (imc < 35)
    {
        printf ("Encontra-se no primeiro nivel de obesidade por favor consulte o seu médico\n");
    }
    else if (imc < 40)
    {
        printf ("Encontra-se no segundo nivel de obesidade por favor consulte o seu médico\n");
    }
    else
    {
        printf ("Encontra-se no primeiro nivel de obesidade por favor consulte o seu médico\n");
    }
}

