#include<stdio.h>
int main()
{
    //Variáveis
    int num[10], num2[10], i;

    //Preenchimento dos vetores
    printf("Digite os números ímpares em um intervalo de 1 a 20: ");
   
    //Multiplicação ao quadrado para cada número informado pelo usuário
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        num2[i] = num[i] * num[i];
    }
    
    //Apresemtação do resultado na tela
    for (i = 0; i < 10; i++)
    {
        printf("\n %d", num2[i]);
    }

    return 0;
}