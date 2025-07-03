#include <stdio.h>

void health (float imc);

int main(void)
{
    float pessoas;
    printf("Quantas pessoas pretende obter o IMC: \n");
    scanf("%i", &pessoas);

    if(pessoas > 0)
    {
        for (int i = 0; i < pessoas; i++)
        {
            int peso;
            int n = i + 1;
            printf("Quanto pesa a %i pessoa: \n", n);
            scanf("%i", &peso);
            float altura;
            printf("Quanto mede a %i pessoa (em m): \n", n);
            scanf("%f", &altura);
            float imc = (float) peso / ( altura * altura);
            health(imc);
        }
    }
    else
    {
        printf("Erro! Introduza um numero de pessoas superior a 0\n");
    }
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

