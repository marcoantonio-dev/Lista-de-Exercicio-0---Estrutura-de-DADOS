#include <stdio.h>
#include <stdlib.h>

/*
3. Faça um programa que receba o valor de um depósito e o valor da taxa de juros. 
Calcule e imprima o valor do rendimento e o valor total depois do rendimento.
*/

int main()
{

    float deposito;
    float taxaJuros;
    float rendimento;
    float valorTotal;

    printf("Digite o valor do deposito: \n");
    scanf("%f",&deposito);
    printf("Digite o valor da taxa de juros: \n");
    scanf("%g",&taxaJuros);

    taxaJuros = taxaJuros / 100; 
    rendimento = deposito * taxaJuros;
    valorTotal = deposito + rendimento;
    printf("O rendimento do valor aplicado foi de : %g \n", rendimento);
    printf("O valor total com o rendimento foi de: %g \n", valorTotal);

}