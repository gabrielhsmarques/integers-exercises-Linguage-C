#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, fat, nprint;
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);
    nprint = n;

    for ( fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;  
    }

    printf("%d! = %d", nprint, fat);
    return 0;
    

}