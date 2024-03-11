#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
5. Faça um programa que receba um número inteiro, calcule e imprima: • a raiz quadrada desse número (sqrt());
esse número elevado ao quadrado.
*/

int main()
{
    short numeroInteiro;
    printf("Digite um numero inteiro: \n");
    scanf("%hd",&numeroInteiro);
    printf("\n");

    int raiz = sqrt(numeroInteiro);

    printf("A raiz do numero e: %d\n", raiz);
    printf("\n");

    short numeroElevado = pow(raiz, 2);
    printf("A numero da raiz elevado ao quadrado e: %hd", numeroElevado);

}