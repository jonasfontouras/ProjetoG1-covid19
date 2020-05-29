#include<stdio.h>

int main()
{
    //VAriáveis 
    float num[100];
    int i, j, aux = 0;

    //Leitura dos números digitados pelo usuário
    for (i = 0; i < 100; i++)
    {
        scanf("%f", &num[i]);
    }

    //Laço de repetição com condicional para pegar números repetidos
    for(i = 0; i <= 100; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if (num[j] == num[i])
            {
                aux = 1;
            }
            
        }
        
    }

    //Condicional que valida se há ou não números repetidos
          if (aux != 0)
        {
            printf("\n Há números repetidos.");
        }
        else
        {
            printf("\n Não há números repetidos.");
        }
        
}