/**
* Arquivo: somaDivisores
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, soma_divisores = 0;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        if(n % i == 0 )
            soma_divisores = soma_divisores + i;
    }
    printf("%d", soma_divisores);

    return 0;
    
}