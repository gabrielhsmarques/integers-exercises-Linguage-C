/**
* Arquivo: imc
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int peso;
    float altura, imc;

    printf("Qual o seu peso? ");
    scanf("%d", &peso);
    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    if (imc < 16)
        printf("%.2f (Perigo de vida)", imc);
    if((imc >= 16) && (imc < 17))
        printf("%.2f (Muito abaixo do peso)");
    if((imc >= 17) && (imc < 18.5))
        printf("%.2f (Abaixo do peso)", imc);
    if((imc >= 18.5) && (imc < 25))
        printf("%.2f (Peso normal)", imc);
    if((imc >= 25) && (imc < 30))
	    printf("%.2f (Acima do peso)", imc);
    if((imc >= 30) && (imc < 35))
	    printf("%.2f (Obesidade grau I)", imc);
    if((imc >= 35) && (imc < 40))
	    printf("%.2f (Obesidade grau II)", imc);
    if (imc >= 40)
        printf("%.2f (Obesidade grau III)", imc);

    return 0;
}