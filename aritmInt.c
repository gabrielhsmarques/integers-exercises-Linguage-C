/**
* Arquivo: aritmInt
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/11/2022
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){
    int n1;
    int n2;
    printf("digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf(",%d + %d = %d, %d - %d = %d, %d * %d = %d, %d / %d = %d, %d %% %d = %d", n1, n2, n1 + n2, n1, n2, n1 - n2, n1, n2, n1 * n2, n1, n2, n1 / n2, n1, n2, n1 % n2);

    return 0;
}