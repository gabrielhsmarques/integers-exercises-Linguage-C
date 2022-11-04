#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma = 0, i;
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);
    
    if (n <= 1)
    {
        printf("voce digitou um numero menor ou igual a 1");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        soma = soma + i;
    }
    printf("%d", soma);

    return 0;
}