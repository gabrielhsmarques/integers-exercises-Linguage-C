/**
* Arquivo: fibonacci
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int j, i, n, k = 1, t;
    printf("Digite o numero maximo da sequencia; ");
    scanf("%d", &n);
    for (i = 0, j = 1; k <= n; k++, t = i + j, i = j, j = t)
    {
        if (k < n)
        {
            printf("%d, ", i);
        }
        if (k == n)
         printf("%d,... ", i);
    }
    return 0;

}